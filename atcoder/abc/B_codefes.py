if __name__ == '__main__':
    N, M, K = map(int, raw_input().split() )
    ans = 0

    for a in xrange(N+1):
        for b in xrange(M+1):
            if (((N-a) * b + a * (M - b)) == K):
                ans = 1

    if ans == 1:
        print "Yes"
    else:
        print "No"





