# ターミナルから入力を受け取る
n = int(input())
S = list(map(int, input().split()))
q = int(input())
T = list(map(int, input().split()))

# ここで問題を解く
C = 0
for j in range(q):
    if T[j] in S :
        C = C + 1 

C = 0
for j in range(q):
    for i in range(n):
        if T[j] == S[i]:
            C = C + 1
            break

C = 0
for T_e in T:
    for S_e in S:
        if T_e == S_e:
            C = C + 1
            break

# プログラムの結果を出力する
print(C)