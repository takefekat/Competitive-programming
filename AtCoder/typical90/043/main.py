from collections import deque

H, W = map(int, input().split())
rs, cs = map(int, input().split())
rt, ct = map(int, input().split())

masu = []
dist = []
for _ in range(H):
    tmp = list(input())
    masu.append(tmp)
    dist.append([[10**9]*4 for _ in range(W)])

todo = deque()
for i in range(4):
    dist[rs-1][cs-1][i] = 0
    todo.append([rs-1, cs-1, i])

dh = [-1, 0, 1, 0]
dw = [0, 1, 0, -1]

while len(todo) != 0:
    v = todo.popleft()
    h, w, dir = v
    for i in range(4):
        h_n = h + dh[i]
        w_n = w + dw[i]

        if h_n < 0 or H-1 < h_n or w_n < 0 or W-1 < w_n:
            continue
        score = 0
        if dir == i:
            score = dist[h][w][dir]
        else:
            score = dist[h][w][dir] + 1
        if dist[h_n][w_n][dir] <= score:
            continue
        if masu[h_n][w_n] == '.':
            if dir == i:
                dist[h_n][w_n][dir] = dist[h][w][dir]
                todo.appendleft([h_n, w_n, dir])
            else:
                dist[h_n][w_n][dir] = dist[h][w][dir] + 1
                todo.append([h_n, w_n, dir])

print(min(dist[rt-1][ct-1]))
