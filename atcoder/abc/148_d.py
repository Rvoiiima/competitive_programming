n = int(input())
l = [int(i) for i in input().split()]

cnt = 0
for i in l:
    if (cnt+1 == i):
        cnt+=1

if cnt==0:
    print("-1")
else:
    print(n-cnt)

