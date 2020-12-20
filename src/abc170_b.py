x, y = [int(i) for i in input().split()]

flag = False
for i in range(x+1):
    turu = x - i
    kame = i

    if (turu * 2 + kame * 4) == y:
        flag = True
        break

if(flag):
    print("Yes")
else:
    print("No")


