n = int(input())

li = [int (i) for i in input().split()]

cnt = [0] * n

for i in li:
    cnt[i] += 1

ans = 1

for i in li[1:]:
    ans = ans*cnt[i-1]%998244353
if li[0] != 0:
    ans = 0

print(ans)

