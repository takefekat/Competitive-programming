R,C = list(map(int, input().split()))

for i in range(-7,9):
    for j in range(-7,9):
        r = i+7
        c = j+7
        if r == R and c == C:
            if max(abs(i), abs(j))%2 == 1:
                 print('white')
            else:
               print('black')