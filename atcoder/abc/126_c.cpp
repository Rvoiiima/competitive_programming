from math import log2
n, k = input().split()
n = int(n)
k = int(k)

if ( n > k ) :
    tmp = 0.0
    ans = 0.0
    for i in range(1, k):
        tmp += pow( 0.5, log2(i) + 1 )
    ans += (1- k/n) + (k-1)/n * tmp
    print(ans)
