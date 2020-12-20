if __name__ == '__main__':
    N = input()

    m = [[0] * (N+1) for i in range(N+1)]

    p = [0] * N

    for i in range (N):
        p[i],dummy  = map(int, raw_input().split())
        
    p.append(dummy)

    for l in range (2, N+1):
        for i in range(1, N - l + 2):
            j = i + l - 1
            m[i][j] = float("inf")
            for k in range(i, j):
                m[i][j] = min(m[i][j], m[i][k] + m[k+1][j] + p[i-1] * p[k] * p[j])

print  m[1][N]


