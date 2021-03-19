import math
X, Y, R = map(float, input().split())
x = int(X*10**4)
y = int(Y*10**4)
r = int(R*10**4)
 
n = 0
# Xmax = math.floor(X+R)*10**4
# Xmin = math.ceil(X-R)*10**4
Xmax = (x+r) // 10**4 *10**4
Xmin = (x-r + 10**4 - 1) // 10**4 *10**4
 
for i in range(Xmin, Xmax+1, 10**4):

    Ymax = math.floor(y+math.sqrt(r**2-(i-x)**2) // 10**4)
    Ymin = math.ceil(y-math.sqrt(r**2-(i-x)**2) // 10**4)
    n += Ymax - Ymin + 1
 
print(n)




