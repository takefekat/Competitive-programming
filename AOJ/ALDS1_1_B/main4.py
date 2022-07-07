
def gcd(x,y):
    if y == 0:
        return x
    return gcd(y, x%y)

def gcd2(x,y):
    return x if y == 0 else gcd(y, x%y)

x,y = list(map(int, input().split()))
print(gcd2(x,y))