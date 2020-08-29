x, n = [int(i) for i in input().split()]
flag = [0 for i in range(105)]
if (n != 0):
    p = [int(i) for i in input().split()]

    for i in p:
        flag[i] = 1



for i in range(100):
    if x-i >=0:
        if flag[x-i] == 0:
            ans = x-i
            break
    else:
        ans = -1
        break

    if flag[x+i] == 0:
        ans = x+i
        break
    
print(ans)

