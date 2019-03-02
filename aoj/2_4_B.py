n = input()
S = map(int, raw_input().split())
q = input()
T = map(int, raw_input().split())

def b_search(key):
    left = 0
    right = n
    while( left < right ) :
        mid =  (left + right) // 2

        if ( key == S[mid] ):
            return 1
        if ( key > S[mid] ):
            left = mid + 1 
        if ( key < S[mid] ):
            right = mid
    return 0

if __name__ == "__main__":
    ans = 0
    for i in T:
        if b_search(i) == 1:
            ans += 1
    print(ans)
