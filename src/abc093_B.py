a, b, k = map(int, input().split())
s = set()
l = range(a, b+1)

if len(l) <= k:
    for i in l:
        print(i)
else:
    for j in l[:k]:
        s.add(j)
    
    for j in l[len(l)-k:]:
        s.add(j)

    m = sorted(list(s))
    for i in m:
        print(i)
