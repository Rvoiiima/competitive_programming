from collections import deque
N = input()
d = [-1] * N
m = [[] for i in xrange(N)]
Q = deque([])

def bfs(s):
    Q.append(s)
    d[s] = 0

    while(len(Q) != 0):
        u = Q.popleft()
        for v in m[u]:
            if( d[v] == -1):
                d[v] = d[u] + 1
                Q.append(v)

if __name__ == '__main__':

    for i in range(N):
        v = map(int, raw_input().split())
        for j in v[2:]:
            m[i].append(j-1)
    
    bfs(0)

    for i in range(N):
        print (i+1), d[i]
