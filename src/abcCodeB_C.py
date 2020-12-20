from collections import deque
def bfs(s):
    global ans
    d = [float('inf')] * N
    Q.append(s)
    d[s] = 0

    while(len(Q) != 0):
        u = Q.popleft()
        u -= 1
        if d[u] == 3:
            if u in m[s]:
                m[s-1].append(u-1)
                m[u-1].append(s-1)
                ans += 1
            continue
        for v in range(N):
            for v in m[u]:
                if d[v] == float('inf'):
                    d[v] = d[u] + 1
                    Q.append(v)

N, M = [int(i) for i in raw_input().split()]
m = [[] for i in range(N)]
d = [float('inf') for _ in range(N)]
Q = deque([])
ans = 0
for i in range(M):
    l, r = [int(i) for i in raw_input().split()]
    m[l-1].append(r-1)
    m[r-1].append(l-1)

for i in range(N):
    bfs(i)

print ans
