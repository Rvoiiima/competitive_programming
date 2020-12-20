#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001


int main() {
    int n;
    string s, t;
    ll dp[MAXN], sm[26];
    // 集約　遷移元の数をまとめて保存しておく配列を用意しておけば、遷移元がバラバラでも計算が楽。
    // sm[a] 入り口がaであるような星にたどり着ける道順の総和 入り口が同じものが遷移元だから遷移元を保存する。
    // dp[i]: 星iにたどり着ける道順の総和

    cin >> n;
    cin >> s >> t;

    dp[0] = 1;
    sm[s[0]-'a'] = 1;

    for (int i=1; i<n; i++) {
        dp[i] = sm[t[i]-'a'];
        dp[i] %= (ll(INF)+7);
        sm[s[i]-'a'] += dp[i];
        sm[s[i]-'a']  %= (ll(INF)+7);
    }
    /*
    for (int i=1; i<n; i++) {
        cout << dp[i] << endl;
    }
    */
    cout << dp[n-1] << endl;
}

