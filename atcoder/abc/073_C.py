N = input()

l = []

for i in range(N):
    l.append(input())

l.sort()

ptr = 0
res = 0
while ptr < N:
    cc = l[ptr]
    f = 0
    while (ptr < N and l[ptr] == cc):
        f += 1
        ptr += 1
    res += f%2

print res
