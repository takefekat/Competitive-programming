N = int(input())
S = set(map(int, input().split()))
q = int(input())
T = set(map(int, input().split()))

#print("S:",S)
#print("T:",T)
#print("S & T:", S & T)
print(len(S & T))