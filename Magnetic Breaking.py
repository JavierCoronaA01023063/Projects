import numpy as np
import matplotlib.pyplot as plt
plt.style.use("ggplot")

mu_0 = 4*np.pi*10e-7

r0 = [0,0]
m = [0,0.1]

x = np.linspace(-1, 1, 21)
y = np.linspace(-1, 1, 21)

X, Y = np.meshgrid(x, y)

X_disp = X - r0[0]
Y_disp = Y - r0[1]

const = mu_0/(4*np.pi)

mag_XY = np.sqrt(X_disp**2 + Y_disp**2)

np.seterr(divide='ignore', invalid='ignore')
X_unit = X_disp/mag_XY
Y_unit = Y_disp/mag_XY

r = mag_XY

m_dot_R = X_unit*m[0] + Y_unit*m[1]

B_x = const*((3*X_unit*m_dot_R - m[0])/r**3)
B_y = const*((3*Y_unit*m_dot_R - m[1])/r**3)

mag_B = np.sqrt(B_x**2 + B_y**2)

plt.figure(figsize=(16,8))
plt.subplot(1,2,1)
plt.quiver(x,y,B_x/mag_B,B_y/mag_B)
plt.title('Vectores Unitarios del Campo Magnético')

plt.subplot(1,2,2)
plt.streamplot(X,Y,B_x,B_y)
plt.title('Líneas de trayectoria del campo Magnético')
plt.show()
