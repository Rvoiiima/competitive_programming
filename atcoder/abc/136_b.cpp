#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001
const ll mod = 1e9+7;
int GetDigit(int num){
    return to_string(num).length();
}

int main() {
    int n, ans=0;
    cin >> n;
    for(int i=1; i<=n; ++i) {
        if (GetDigit(i) % 2 == 1) ++ans;
    }

    cout << ans << endl;

}

