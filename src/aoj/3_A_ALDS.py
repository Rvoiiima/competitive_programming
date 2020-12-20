list = input().split()
stack = []
for i in list:
    if ( i.isdigit() ):
        stack.append(int(i))
    elif (i == '+'):
        stack.append(stack.pop() + stack.pop())
    elif (i == '*'):
        stack.append(stack.pop() * stack.pop())
    elif (i == '-'):
        stack.append( (-1)*stack.pop() + stack.pop())

print(stack.pop())
