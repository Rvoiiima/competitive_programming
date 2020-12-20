def bfs(i, c):
    global m,C

    q = [i]
    while len(q) > 0:
        j = q.pop()
        if C[j] == -1:
            C[j] = c
            q += M[j]
if __name__ == '__main__':
    n, m = map(int, raw_input().split())
    M = [[] for i in xrange(n)]
    C = [-1] * n

    for i in xrange(m):
        l, r = map(int, raw_input().split())
        M[l].append(r)
        M[r].append(l)

    c = 0
    for i in xrange(n):
        if C[i] == -1:
            bfs(i, c)
            c += 1

    q = input()
    for i in xrange(q):
        l, r = map(int, raw_input().split())
        if(C[l] == C[r]):
            print "yes"
        else:
            print "no"



