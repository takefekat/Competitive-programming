


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
