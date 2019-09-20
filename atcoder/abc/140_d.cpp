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
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    int hap_r = 0, hap_l = 0;
    rep(i, s.size()-1) {
        if (s[i] == 'R' and s[i+1] == 'R') ++ hap_r;
        }
    for(int i=1; i<n; ++i) {
        if (s[i] == 'L' and s[i-1] == 'L') ++ hap_l;
    }
    
    int cnt_lr=0, cnt_rl=0;

    for(int i=0; i<n; ++i) {
        if (s.substr(i, 2) == "LR") cnt_lr++;
        else if (s.substr(i, 2) == "RL") cnt_rl++;
    }

    int hap_add = 0;
    hap_add = min(cnt_rl,k) + min(cnt_lr,k);

    cout << hap_l+hap_r+hap_add << endl;
}

