N = int(input())

# 集合
S = set()

for i in range(N):
    key, string = list(map(str, input().split()))

    # 集合に string を登録
    if key == 'insert':
        S.add(string)

    # 集合に string があるか検索
    else:
        if string in S:
            print('yes')
        else:
            print('no')

print(S)


