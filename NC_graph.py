import numpy as np
import matplolib.pyplot as plt


datos=np.loadtxt("datos.txt")
N=700
datos1=[0:N-1;0]
datos2=[N:2*N-1;0]
datos3=[2*N:3*N-1;0]
datos4=[3*N:4*N-1;0]
datos5=[4*N:5*N-1;0]

plt.plot(datos1)
plt.plot(datos2)
plt.plot(datos3)
plt.plot(datos4)
plt.plot(datos5)
plt.savefig("advection.txt)


