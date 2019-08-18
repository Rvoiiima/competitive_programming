#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;


int main() {
    int black=0, white=0;
    string S;
    cin >> S;

    rep(i, S.length()) {
        
        if (i%2 == 0) {
            if (S[i] == '1') black++;
            else white++;
        } else {
            if (S[i] == '0') black++;
            else white++;
        }
    }

    cout << min(black, white) << endl;
    
}

