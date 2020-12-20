n=int(input())
a = [int(i) for i in input().split()]

flag = True
if a[0] == 1:
    flag = False

now = 1 
ans = 1
for i in range(1, n):
    now *= 2
    ans += now
    if (now <= a[i]):
        flag = False

    now = 2*(now-a[i])

if now != a[n]:
    flag = False


print(ans)




    
    

