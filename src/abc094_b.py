n, m, x = (int(i) for i in input().split())
a = [0] * (n+1)

for i in input().split():
    k = int(i)
    a[k] = 1

left = right = 0
for i in range(n+1):
    if i < x:
        left += a[i]
    else:
        right += a[i]

ans = min(left, right)
print(ans)
    



