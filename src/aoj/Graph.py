if __name__ == '__main__':
    N = input()

    m = [[0] * N for i in range(N)]

    for i in range(N):
        v = map(int, raw_input().split())
        for j in v[2:]:
            m[i][j-1] = 1

    for row in m:
        for i in row:
            print i,
        print
