N = int(input())
S = list(map(int, input().split()))
q = int(input())
T = list(map(int, input().split()))

left = 0
right = N
ans = 0
# q回 二分探索を行う
for i in range(q):

    #print("二分探索開始： (left, right) = (", left, ", ", right, ")")

    while left < right:

        mid = (left + right) // 2
        #print("  S[", mid, "] = ", S[mid])
        if S[mid] == T[i]:      # 一致するものがあれば、ansに1足して、二分探索終了(while文を抜ける)
            ans += 1
            break

        elif T[i] < S[mid]:
            right = mid
        
        else:
            left = mid + 1
        print("    (left, right) = (", left, ",", right, ")")

    # 一致するものがなければ、何もせず二分探索終了

print(ans)


