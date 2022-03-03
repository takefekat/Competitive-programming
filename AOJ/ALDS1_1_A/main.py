# 挿入ソートの関数（関数定義だけでは実行されない）
def insertionSort(A, N):
    for ßi in range(1, N):
        v = A[i]
        j = i - 1
        while j >= 0 and A[j] > v :
            A[j + 1] = A[j]
            j = j - 1
        A[j + 1] = v
        print(*A)

# ここから下の処理が実行される
N = int(input())
A = list(map(int, input().split()))

print(*A)
insertionSort(A, N)

