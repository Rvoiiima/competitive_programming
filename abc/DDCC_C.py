N, C = map(int, input().split())
l = []
for _ in range(N):
    l.append(int(input()))

l.sort()
r = N

p = 0
for i in range(N-1, -1, -1):
    if l[i] > 0:

        if(i > p) and ( l[p] + l[i] < C) :
            l[i] = -1
            p += 1
            r -= 1

print(r)

