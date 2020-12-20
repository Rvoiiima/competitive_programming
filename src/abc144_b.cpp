#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define InF (1e9)
#define PI (acos(-1))
#define MAXn 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

int main() {
    int n;
    cin >> n;
    bool flag = false;

    int ans;

    for(int i=1; i<10; i++) {
        if (n%i == 0) {
            ans = n/i;
            if (ans<10){
                flag = true;
                break;
            }
        }
    }
    if (flag) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    cout << endl;
}

