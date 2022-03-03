# バブルソート()
def bubbleSort2(A, N):
    i = 0
    count = 0
    for i in range(0, N-1):
        # range(a, b, -1): a から b+1 まで 1ずつ減少する。 
        for j in range(N-1, i, -1):
            if A[j] < A[j-1]:
                A[j-1], A[j] = A[j], A[j-1] # A[j] と A[j-1] を交換
                count = count + 1
    print(*A)
    print(count)  

# バブルソート
def bubbleSort(A, N):
    count = 0
    flag = True
    i = 0
    # 未ソートな部分で1度も交換が行われない場合は、ソート済みなので終了する
    while flag: 
        flag = False
        for j in range(N-1, i, -1): # N-1 から i+1 まで 1 減らす
            if A[j] < A[j-1]:
                A[j-1], A[j] = A[j], A[j-1] # A[j] と A[j-1] を交換
                flag = True                 # 交換した場合はTrueにする
                count = count + 1
        i = i + 1

    print(*A)
    print(count)

N = int(input())
A = list(map(int, input().split()))

print(A.sort())


# bubbleSort(A, N)





