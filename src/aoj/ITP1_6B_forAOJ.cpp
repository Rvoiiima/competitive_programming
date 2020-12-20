#include <iostream>
#include <map>
#include <string>

using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

bool cards[4][13];
int main() {
    int n;
    cin >> n;
    char tmp_mark;
    int tmp_digit, tmp_markdigit;
    
    rep(i, n) {
        cin >> tmp_mark >> tmp_digit;
        --tmp_digit;

        if (tmp_mark == 'S') cards[0][tmp_digit]  = true;
        if (tmp_mark == 'H') cards[1][tmp_digit]  = true;
        if (tmp_mark == 'C') cards[2][tmp_digit]  = true;
        if (tmp_mark == 'D') cards[3][tmp_digit]  = true;
    }

    rep(i, 4) {
        rep(j, 13) {
            if(!cards[i][j]) {
                if (i == 0) cout << 'S';
                if (i == 1) cout << 'H';
                if (i == 2) cout << 'C';
                if (i == 3) cout << 'D';
            
                cout << " " << j+1 << endl;
            }
        }
    }

}

