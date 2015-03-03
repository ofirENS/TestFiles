#!/usr/bin/python
#-*-coding:utf8-*-

from numpy import random
from numpy import math
#from numpy import arange
from matplotlib.pyplot import plot, show


class Map: 
    
    def __init__(self, nPart = 1, D = [1., 1.], d = 3.9, targetNb = 1, r = 1., R=4., k=0.4):
        # Layout
        self.D = D # Diffusion constant in µm**2/s, Same value if isotrope
        self.d = d # Distance between the source and the center of the cell # source at the membrane
        self.k = k # probability of a particle to be killed, appears as kdt
        # Source
        self.source = Particle(0, x=d, y=0) # The position of the source at distance d of the nucleus
        # Cell (Center (0,0))
        self.cell    = Particle(0)
        self.nucleus = Particle(0)
        self.r = r # Radius of the nucleus
        self.R = R # Radius of the cell (equivalent to the membrane)
        # Particles
        self.nPart = nPart # Number of particles to simulate
        self.particles = [Particle(0, x=self.source.x, y=self.source.y) for ii in range(nPart)]
        self.simulated_target = targetNb # Number of entrances to simulate
        
        # Simulation modes
        self.mode = "absorb" 
        # Time
        self.time = 0
        # Tracks of trajectories
        self.trajectories = [p.trajectory for p in self.particles] # Point to the existing particles trajectories
        self.hits = [0] # Number of hits in a time step
        #self.contacts = [-1 for p in self.particles] # Receptors that have been hit TODO
        self.killed = [0] # Number of particules being killed in a time step

    def update(self, dt=0.1, debug=False):
        terminated = 0   
        c_thres    = 1-self.k
    
        for pp in range(len(self.particles)):            
         #print("particle " + str(pp) + " killed=" + str(self.particles[pp].killed)) 
         if self.particles[pp].killed==False:
            # Check if the particle dies
##### Mon problème concerne cette partie            
            c = random.random()         
            #print(c>c_thres)
            if (c > c_thres):
                #for ii in range(self.nPart):
                    #self.killed[pp] += 1 # particle has been killed                    
                    #if (self.mode == "absorb"):
                     #   self.newParticle(pp)
                    terminated += 1
                    self.particles[pp].killed=True                   
                    break
                    
##### fin de la partie de la mort qui tue                        
            p  = self.particles[pp]
            mx = math.sqrt(2 * self.D[0] * dt) * random.normal()
            my = math.sqrt(2 * self.D[1] * dt) * random.normal()
            # Check collision with the nucleus 
            # Get the equation ax+by=c of the line corresponding to the trajectory 
            b = -mx; a = my
            c = (a * p.x + b * p.y) / b # The particle is on the trajectory, simplify by b to get the reduced equation
            a /= b
            xc = self.nucleus.x
            yc = self.nucleus.y
            # Coordinates of the point where the trajectory of the particle hits the nucleus
            #delta = self.r**2 * (1-a**2) - (xc * a - (c-yc))**2 + 2 * a**2 * xc # discriminant
            # Compute Delta/4
            delta = self.r**2 * (a**2 + 1) - (a * xc - c + yc)**2
            DEF_m = False
            if (delta > 0):
                DEF_m = True
                xmp = ( (xc + (c-yc)*a) + math.sqrt(delta) ) / (1+a**2)
                ymp = c - a * xmp
                xmm = ( (xc + (c-yc)*a) - math.sqrt(delta) ) / (1+a**2)
                ymm = c - a * xmm
                # Choose the good intersection point which is the closest to the initial point
                if ( math.sqrt((ymm - p.y)**2 + (xmm - p.x)**2) < math.sqrt((ymp - p.y)**2 + (xmp - p.x)**2) ):
                    xm = xmm
                    ym = ymm
                else:
                    xm = xmp
                    ym = ymp
                # Detect if the trajectory crosses the nucleus or is just directed toward it
                m_on_segment = True
                if (mx > 0):
                    if (xm < p.x or xm > p.x + mx):
                        m_on_segment = False
                else:
                    if (xm > p.x or xm < p.x + mx):
                        m_on_segment = False
                if (my > 0):
                    if (ym < p.y or ym > p.y + my):
                        m_on_segment = False
                else:
                    if (ym > p.y or ym < p.y + my):
                        m_on_segment = False
            else: # If delta < 0, there is no intersection between the trajectory and the nucleus
                m_on_segment = False

            if ( p.distanceAfterMoveTo(self.nucleus.x, self.nucleus.y, mx, my) <= self.r and not m_on_segment and p.distanceTo(self.nucleus.x, self.nucleus.y) > self.r):
                print("Inconsistency")
                print("Before move : " + str(p.distanceTo(self.nucleus.x, self.nucleus.y)))
                print("After move : " + str(p.distanceAfterMoveTo(self.nucleus.x, self.nucleus.y, mx, my)) + ", r="+ str(self.r))
                print("delta = " + str(delta))
                print("(xm, ym)=(" + str(xm) + "," + str(ym) + "), distance = " + str(Particle(0, x=xm, y=ym).distanceTo(0, 0)))
                print("(p.x, p.y)=(" + str(p.x) + "," + str(p.y) + "), distance = " + str(p.distanceTo(self.nucleus.x, self.nucleus.y)))
                print("(p.x+mx, p.y+my)=(" + str(p.x+mx) + "," + str(p.y+my) + "), distance = " + str(p.distanceAfterMoveTo(self.nucleus.x, self.nucleus.y, mx, my)))
                if (DEF_m):
                    print("mx=" + str(mx) + ", my=" + str(my))
                print("----------------------------------")

            if (m_on_segment):
                if (debug):
                    print(str(p) + ", mx="+ str(mx)+ ", my="+ str(my))
                    print("Before move : " + str(p.distanceTo(self.nucleus.x, self.nucleus.y)))
                    print("After move : " + str(p.distanceAfterMoveTo(self.nucleus.x, self.nucleus.y, mx, my)) + ", r="+ str(self.r))
                    print("delta = " + str(delta))
                    print("(xm, ym)=(" + str(xm) + "," + str(ym) + "), distance = " + str(Particle(0, x=xm, y=ym).distanceTo(0, 0)))
                    print("--------------------------------------")
                    
                # Check if it is an entrance in the nucleus
                for ii in range(self.nPart):
                    self.hits[ii] += 1 # nucleus has been hit
                    if (self.mode == "absorb"):
                        print("particle" + str(ii)+" is absorbed")
                        self.particles[ii].absorbed=True
                        #self.newParticle(pp)
                        terminated += 1
                        break

            else:
                p.x += mx
                p.y += my
            # If the particle is too far, delete it and create a new one
            #if ( p.distanceTo(self.nucleus.x, self.nucleus.y) > self.R ):
                #self.newParticle(pp)
            #p.update()
             #self.time += dt
        return(terminated)    
                
                
                
    def newParticle(self, ii):
        self.trajectories.append(self.particles[ii].trajectory)
        self.particles[ii] = Particle(self.time, x=self.source.x, y=self.source.y)

    def run(self, dt=0.001, max_steps=1000, debug=False):
        self.hits   = [0]
        self.killed = [0]
        simulated   = [0]
        killed      = [0]
        steps       = 0
        while (steps < max_steps):#(simulated[-1] < self.simulated_target and steps < max_steps):
            k = self.update(dt, debug=debug)
            
            self.hits.append(k)#self.update(dt, debug=debug))
            #self.killed.append(self.update(dt, debug=debug))
            simulated.append(simulated[-1] + self.hits[-1])
            killed.append(killed[-1] + self.killed[-1])
            steps += 1
        print(str(sum(self.hits)))    
        print(str(simulated[-1]) + " particles hit the nucleus.")
        print(str(killed[-1]) + " particles have been killed.")
        interval = [ii*dt for ii in range(steps+1)]
        plot(interval, simulated, label="Cumulative")
        self.plotHits(dt)
        show()
        plot(interval, killed, label = "Cumulative")
        self.plotKilled(dt)
        show()
        return({"dt":dt,"max_steps":max_steps})

    def nucleusHist(self):
        """
        Histogram of time to reach the nucleus
        """
        pass
    
    def plotHits(self, dt):
        interval = []
        ii = 0
        contacts = []
        for hit in self.hits:
            interval.append(ii * dt)
            if (hit > 0):
                contacts.append(0)
                interval.append(ii * dt)
                contacts.append(hit)
                interval.append(ii * dt)
                contacts.append(0)
            else:
                contacts.append(hit)
            ii += 1
        plot(interval, contacts, label="Nucleus hits")

    def plotKilled(self, dt):
        interval = []
        ii = 0
        contacts = []
        for kill in self.killed:
            interval.append(ii * dt)
            if (kill > 0):
                contacts.append(0)
                interval.append(ii * dt)
                contacts.append(kill)
                interval.append(ii * dt)
                contacts.append(0)
            else:
                contacts.append(kill)
            ii += 1
        plot(interval, contacts, label="particle is killed")
        
    def plotTrajectories(self, select=-1, alpha=0.7):
        # Draw some trajectories or all of them
        if (select == -1):
            for tt in self.trajectories:
                plot(tt.x, tt.y, alpha=alpha)
                plot(tt.x[-1], tt.y[-1], "o", alpha=alpha, markersize = 3)
                plot(tt.x[0], tt.y[0], "o", alpha=alpha, markersize = 3)
        elif isinstance(select, list):
            for tt in select:
                plot(self.trajectories[tt].x, self.trajectories[tt].y)
                plot(self.trajectories[tt].x[-1], self.trajectories[tt].y[-1], "o")
        elif isinstance(select, int):
            plot(self.trajectories[select].x, self.trajectories[select].y)
        self._plotLayout()
        show()

    def _plotLayout(self):
        # Plot the cell with the nucleus, and the limits of the simulation
        xc = list(); yc = list()
        xe = list(); ye = list()
        for ii in range(0, 365):
            rangle = to_radian(ii)
            xc.append(self.nucleus.x + self.r * math.cos(rangle))
            yc.append(self.nucleus.y + self.r * math.sin(rangle))
            xe.append(self.nucleus.x + self.R * math.cos(rangle))
            ye.append(self.nucleus.y + self.R * math.sin(rangle))
        plot(xc, yc, "-k")
        plot(xe, ye, "--k")

    def showLayout(self):
        self._plotLayout()
        show()




class Particle:
    """
    Particle object
    """

    def __init__(self, creation_time, x=0, y=0):
        self.x = x
        self.y = y
        self.killed = False
        self.absorb = False
        self.creation = creation_time
        self.trajectory = Trajectory()
        self.update()

    def update(self):
        self.trajectory.x.append(self.x)
        self.trajectory.y.append(self.y)

    def distanceAfterMoveTo(self, cx=0, cy=0, mx=0, my=0):
        return(math.sqrt((self.x + mx - cx)**2 + (self.y + my - cy)**2))

    def distanceTo(self, cx=0, cy=0):
        return(self.distanceAfterMoveTo(cx, cy, 0, 0))

    def __str__(self):
        return(self.__repr__())

    def __repr__(self):
        return("x = " + str(self.x) + ", y = " + str(self.y))
        
        
class Trajectory:
    """
    Record trajectories of particles
    """
    
    def __init__(self):
        self.x = []
        self.y = []

def to_radian(angle):
    return(angle * math.pi / 180)
        
        
sim= Map(100, [1.5, 1.5], 2.9,2, 1., 5., 0.1)
sim.run(0.1,1800, False)
sim.plotTrajectories(-1, 0.7)
sim._plotLayout
sim.showLayout




# variation de R et d par rapport au nombre de hits
# variation de k par rapport au nombre de hits
# variation de N par rapport au nombre de hits


# vert : particules tuées
#bleu : particules hits

