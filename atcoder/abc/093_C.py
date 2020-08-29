l = list(map(int, input().split()))
ma = max(l)
c = 0

for i in l:
    c += int((ma - i)/2)
    l[l.index(i)] += int((ma - i)/2) * 2

if l.count(ma-1) == 2:
    c += 1
elif l.count(ma-1) == 1:
    c += 2

print(l)
print(c)
