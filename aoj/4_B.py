n = int(input())
S = input().split()
S = list(map(long, S))
q = int(input())
T = list(map(long, S))
print(S)
print(T)
def b_search(key):
    left = 0
    right = n
    while( left < right ) :
        mid =  (left + right) // 2

        if ( key == S[mid] ):
            print("find:",key)
            return 1
        if ( key > S[mid] ):
            print("left:",left)
            left = mid + 1 
        if ( key < S[mid] ):
            right = mid
    return 0

if __name__ == "__main__":
    ans = 0
    for i in T:
        print("i: ", i)
        if b_search(int(i)) == 1:
            ans += 1
    
    print(ans)
