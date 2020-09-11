import numpy as np
import matplotlib.pyplot as plt

data=np.loadtxt("2.2.txt")
plt.plot(data[:,0],data[:,1])
plt.show()

