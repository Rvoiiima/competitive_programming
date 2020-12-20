def swap(a, b):
    dummy = a
    a = b
    b = dummy
    return a, b


l = list(map(int, input().split()))

if l[0] > l[1]:
    l[0], l[1] = swap(l[0], l[1])

if l[1] > l[2]:
    l[1], l[2] = swap(l[1], l[2])

if l[0] > l[1]:
    l[0], l[1] = swap(l[0], l[1])

for n, i in enumerate(l):
    if n != 0:
        print(" ", end="")
    print(i, end="")
    
    if n == 2:
        print()
