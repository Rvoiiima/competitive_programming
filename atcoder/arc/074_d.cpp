#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;

int n;
vector<int> a;
ll sum_l[MAXN];
ll sum_r[MAXN];
priority_queue<int> que_l;
priority_queue<int, vector<int>, greater<int> > que_r;

ll sum_queue(priority_queue<int> que) {
    ll sum = 0;
    ll 

int main() {
    cin >> n;
    int tmp;
    rep(i, 3*n) {
        cin >> tmp;
        a.push_back(tmp);
    }



    rep(i, n) {
        que_l.push(a[i]);
        que_r.push(a[n-1-i]);
    }


    for(int i=n; i<2*n; ++i) {
        sum_l[i-n] = accumulate(que_l.begin(), que_l.end(), 0);
        que_l.pop();
        que_l.push(a[i]);
    }

    for(int i=n; i<2*n; ++i) {
        sum_r[i-n] = accumulate(que_r.begin(), que_r.end(), 0);
        que_r.pop();
        que_r.push(a[i]);
    }
    int ans = -1 * int(INF); 
    for(int k=n; k<2*n; ++k) {
        ans = max(ans, sum_l[k-n]-sum_r[3*n-k-1-n]);
    }
    cout << ans << endl;
}

