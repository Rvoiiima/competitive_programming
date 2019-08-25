if __name__ == '__main__':
    N = input()
    d = []
    for _ in xrange(N):
        A, B = map(int, raw_input().split())
        d.append((A,B))
    
    d.sort()

    A1, B1 = d[0]
    AN, BN = d[-1]

    print AN + BN 
    

