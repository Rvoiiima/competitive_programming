N = int(input())
r = []
for i in range(N):
    s, p = input().split(" ")
    r.append((i+1, s, int(p)))


sorted_r = sorted(r, key=lambda x:x[2], reverse=True)
sorted_r = sorted(sorted_r, key=lambda x:x[1])

for i in sorted_r:
    print(i[0])
