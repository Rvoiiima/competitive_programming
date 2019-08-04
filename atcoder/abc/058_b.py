O = input()
E = input()

l = len(E)
ans = ""
for i in range(l):
    ans += O[i]
    ans += E[i]

if (len(O) != l):
    ans += O[-1]

print(ans)

