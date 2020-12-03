from math import sqrt, floor

S, P = map(int, input().split())

tmp = sqrt(S * S - 4 * P)
M = (S + tmp) / 2
N = S - M

if N+M == S and N*M == P:
    print("Yes\n")
else:
    tmp = sqrt(S * S - 4 * P)
    M = (S - tmp) / 2
    N = S - M
    if N+M == S and N*M == P:
        print("Yes\n")
    else:
        print("No\n")
