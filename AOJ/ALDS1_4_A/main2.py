# ターミナルから入力を受け取る
n = int(input())
S = list(map(int, input().split()))
q = int(input())
T = list(map(int, input().split()))

# ここで問題を解く
C = q
for j in range(q):
    flag = 0
    for i in range(n):
        if S[i] == T[j]:
            flag = 1
            break

    if flag == 0:
        C = C - 1

# プログラムの結果を出力する
print(C)