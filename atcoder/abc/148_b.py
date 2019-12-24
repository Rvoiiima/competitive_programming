n = input()
s, t = input().split()

ans = ""
for i, j in zip(s, t):
    ans += i
    ans += j

print(ans)

