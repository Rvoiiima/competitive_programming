def swap(a, b):
    dummy = a
    a = b
    b = dummy
    return a, b


while 1:
    
    x, y = list(map(int, input().split()))
    if x == y and x == 0:
        break

    if x > y:
        x, y = swap(x, y)

    print(x, y)

