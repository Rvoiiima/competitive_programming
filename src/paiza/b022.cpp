#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 110
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;



int main() {
    int M, N, K;
    cin >> M >> N >> K;
    int talk;
    vector<int> p(110, 0);
    p[0] = N;
    for (int i=0; i<K; ++i) {
        cin >> talk;
        for(int j=0; j<=M; ++j) {
            if (p[j]) {
                --p[j];
                ++p[talk];
            }
        }
    }

    int num=0, ans=0;
    for(int i=1; i<=M; ++i) {
        num = max(num, p[i]);
    }
    for(int i=1; i<=M; ++i) {
        if (p[i] == num) cout << i << endl;
        //cout << p[i] << endl;
    }
}

