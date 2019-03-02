N = input()
color = [0] * N
d = [0] * N
f = [0] * N
nt = [0] * N
m = [[0] * N for i in range(N)]
S = []
tt = 0

def next(u):
    w = nt[u]
    for v in range(w, N):
        nt[u] = v + 1
        if( m[u][v] ):
            return v
    return -1

def dfs_visit(r):
    global tt
    S.append(r)
    color[r] = 1
    tt += 1
    d[r] = tt

    while( len(S) != 0 ):
        u = S[-1]

        v = next(u)
        if ( v != -1 ):
            if ( color[v] == 0 ):
                color[v] = 1
                tt += 1
                d[v] = tt
                S.append(v)
        else:
            S.pop()
            color[u] = 2
            tt += 1
            f[u] = tt
        
def dfs():
    for u in range(N):
        if( color[u] == 0 ):
            dfs_visit(u)

if __name__ == '__main__':

    for i in range(N):
        v = map(int, raw_input().split())
        for j in v[2:]:
            m[i][j-1] = 1
    
    dfs()

    for i in range(N):
        print (i+1), d[i], f[i]

