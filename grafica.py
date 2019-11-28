import os
import numpy as np
import matplotlib.pyplot as plt

x=np.linspace(0,40,40)
plt.figure()
data = np.loadtxt("grafica.dat")
plt.subplot(3,1,1)
plt.plot(x,data)
plt.xlabel('X')
plt.ylabel('Y')
plt.subplot(3,1,2)
plt.plot(x,data)
plt.xlabel('X')
plt.ylabel('Y')
plt.subplot(3,1,3)
plt.plot(x,data)
plt.xlabel('X')
plt.ylabel('Y')

plt.savefig("grafica.png")