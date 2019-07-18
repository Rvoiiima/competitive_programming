#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001


int main() {
    int a, b, x;
    cin >> a >> b >> x;
    int ans = int(INF);
    int tmp_ans, tmp_x;

    for(int i=0; i<= (x/1000)+1; i++) {
        tmp_ans = i * a;
        tmp_x = x - i * 1000;

        if (tmp_x > 0) {
            tmp_ans += (tmp_x+499)/500 * b;
        }
//        cout << tmp_ans << endl;

        ans = min(ans, tmp_ans);
    }

    cout << ans << endl;
}

