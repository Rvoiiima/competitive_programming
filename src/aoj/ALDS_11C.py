from collections import deque
N = input()
d = [float('inf')] * N
m = [[0] * N for i in range(N)]
Q = deque([])

def bfs(s):
    Q.append(s)
    d[s] = 0

    while(len(Q) != 0):
        u = Q.popleft()
        for v in range(N):
            if (m[u][v] and  d[v] == float('inf')):
                d[v] = d[u] + 1
                Q.append(v)

if __name__ == '__main__':

    for i in range(N):
        v = map(int, raw_input().split())
        for j in v[2:]:
            m[i][j-1] = 1
    
    bfs(0)

    for i in range(N):
        if d[i] == float('inf'):
            d[i] = -1
        print (i+1), d[i]

