#import matplotlib import pyplot as plt
import matplotlib.pyplot as plt
import numpy as np

x = np.arange(0,10)
y = x ^ 2
z = x ^ 3
t = x ^ 4
# plt.plot([1,2,3], [3,5,1])
print(plt.style.use('dark_background'))
plt.title("Graph Drawing")
plt.xlabel("Time")
plt.ylabel("Distance")
plt.plot(x,y,"brown")
plt.plot(x,y,'*')
plt.plot(x,z, color = 'red')
plt.plot(x,t, color = 'black')
plt.legend(['Race1', 'Race2', 'Race3'], loc=4)
# plt.plot(x,y,'*','black')
# plt.savefig('plot.pdf', format='pdf')
#Annotate
# plt.annotate('Second Entry', xy = [2,1])
# plt.annotate('Third Entry', xy = [4,6])
print(plt.style.available)
plt.show()