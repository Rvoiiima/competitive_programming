#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 20001
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;


int main() {
    int n, l[MAXN];
    cin >> n;
    priority_queue<int, vector<int>, greater<int> > que;
    int tmp;
    for(int i=0; i<n; i++) {
        cin >> tmp;
        que.push(tmp);
    }

    ll ans = 0;
    while (que.size() > 1) {
        int l1, l2;
        l1 = que.top();
        que.pop();
        l2 = que.top();
        que.pop();

        ans += l1 + l2;
        que.push(l1 + l2);
    }

    cout << ans << endl;
        
        


}

