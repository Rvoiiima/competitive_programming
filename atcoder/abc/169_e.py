n = int(input())
al = []
bl = []
for i in range(n):
    a, b = [int(x) for x in input().split()]
    al.append(a)
    bl.append(b)

if (n % 2 == 1):
    tmp = int((n+1)/2)-1
    ans = bl[tmp]-al[tmp]+1
else:
    tmp = int(n/2)
    ans = (bl[tmp]-al[tmp]+1) * (bl[tmp-1]-al[tmp-1]+1)
print(ans)


