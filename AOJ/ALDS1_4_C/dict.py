N = int(input())

# 辞書
D = dict()

for i in range(N):
    key, string = list(map(str, input().split()))

    # 辞書に string を登録
    if key == 'insert':
        D[string] = True

    # 辞書に string があるか検索
    else:
        if string in D:
            print('yes')
        else:
            print('no')

