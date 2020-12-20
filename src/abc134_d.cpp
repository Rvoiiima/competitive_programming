#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 200001

ll gcd(ll a, ll b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

int main() {
    int n, a[MAXN], m, b[MAXN], mid;

    cin >> n;

    for (int i=0; i<n; i++) {
        cin >> a[i+1];
    }

    for (int i=n; i>=1; --i) {
        int sum = 0;
        for (int j=2*i; j<=n; j+=i) {
            sum ^= b[j];
        }
        b[i] = sum^a[i];
    }

    vector<int> ans;
    for (int i=1; i<=n; i++) {
        if (b[i]) ans.push_back(i);
    }
    cout << ans.size() << endl;
    for(int i=0; i<ans.size(); ++i) {
        cout << ans[i];
        if (i+1 != ans.size()) cout << " ";
    }

    cout << endl;
}
