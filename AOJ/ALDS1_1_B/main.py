import math

##############
# 教科書通り
##############
def gcd(x, y):
    if x < y:
        y, x = x, y
    
    while y > 0:
        x, y = y, x % y
    
    return x
    
##############
# O(x)
##############
def gcd_TLE(x, y): 
    for d in range(x ,0, -1):
        if x % d == 0 and y % d == 0:
            return d

##############
# O(sqrt(x))
##############
def gcd_sqrt(x, y):
    yaku = []
    for d in range(1, int(math.sqrt(y))+1):
        if y % d == 0:          # y = 18の時：
            yaku.append(d)      # d:    1,  2, 3, 4
            yaku.append(y//d)   # y//d: 18, 9, 6, -
    
    yaku.sort()
    yaku.reverse()

    for d in yaku:
        if x%d == 0:
            return d


##############
# 再帰関数1
##############
def gcd_rec1(x, y):
    if y == 0:
        return x
    else:
        return gcd_rec1(y, x%y)


##############
# 再帰関数2 (3項演算子)
##############
def gcd_rec2(x,y):
    return x if y == 0 else gcd_rec2(y, x%y)



x,y = list(map(int, input().split()))

#print( gcd(x, y) )
#print( gcd_TLE(x, y) )
#print( gcd_sqrt(x, y) )
#print( gcd_rec1(x, y) )
#print( gcd_rec2(x, y) )
print( math.gcd(x, y) )