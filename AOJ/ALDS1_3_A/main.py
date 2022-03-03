
L = input().split()

stack = []

for s in L:
    if s == '+' :
        a = stack.pop()
        b = stack.pop()
        stack.append(a+b)
    elif s == '-':
        a = stack.pop()
        b = stack.pop()
        stack.append(b-a)        
    elif s == '*':
        a = stack.pop()
        b = stack.pop()
        stack.append(a*b)
    else:
        stack.append(int(s))

print(stack[0])