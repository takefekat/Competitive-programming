def isPrimeOdd(x):
    if x == 2:
        return True
    if x < 2 or x % 2 == 0:
        return False

    i = 3
    while i*i <= x :
        if x % i == 0:
            return False
        i += 2
    return True
    
    
def isPrime(x):
    if x < 2:
        return False
    if x == 2:
        return True

    i = 2
    while i*i <= x :
        if x % i == 0:
            return False
        i += 1
    return True



def main():
    n = int(input())

    ans = 0
    for i in range(n):
        x = int(input())
        if isPrime(x):
            ans += 1
            #print(x)
    print(ans)


if __name__ == "__main__":
    main()
