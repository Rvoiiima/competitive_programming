def dijkstra():
    N = input()
    M = [ [float('inf')] * N for i in xrange(N)]
    color = [0] * N
    d = [float('inf')] * N
    p = [-1] * N

    d[0] = 0
    p[0] = -1

    for i in xrange(N):
        l = map(int, raw_input().split())

        for j in xrange(l[1]):
            M[i][l[2 * (j+1)]] = l[2 * (j+1) + 1]

    while 1:
        mincost = float('inf')
        for i in xrange(N):
            if color[i] != 2 and d[i] < mincost:
                mincost = d[i]
                u = i

        if mincost == float('inf'):
            break

        color[u] = 2

        for v in xrange(N):
            if color[v] != 2 and M[u][v] != float('inf'):
                if d[u] + M[u][v] < d[v]:
                    d[v] = d[u] + M[u][v]
                    p[v] = u
                    color[v] = 1

    for i in xrange(N):
        if d[i] == float('inf'):
            d[i] = -1
        print i,d[i]

if __name__ == '__main__':
    dijkstra()

