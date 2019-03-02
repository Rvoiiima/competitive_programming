def main():    
    N = int(input())
    D = [int(i) for i in input().split()]
    M = int(input())
    D.sort()
    T = [int(i) for i in input().split()]
    T.sort()

    point = 0
    for t in T:
        for p in range(point, N):
            if D[p] < t:
                continue
            elif D[p] == t:
                point = p+1
                #print(D[p])
                break

            elif D[p] > t:
                print('NO')
                return 
    print('YES')
    return

if __name__ == '__main__':
    main()
