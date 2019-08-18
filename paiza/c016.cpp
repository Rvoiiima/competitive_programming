#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 1000010
#define rep(i,n) for (int i = 0; i < (n); ++i)
const ll mod = 1e9+7;


int main() {
    string s;
    cin >> s;
    for(int i=0; i <(int) s.length(); ++i) {
        if (s[i] == 'A')  s[i] = '4';
        if (s[i] == 'E')  s[i] = '3';
        if (s[i] == 'G') s[i] = '6';
        if (s[i] == 'I') s[i] = '1';
        if (s[i] == 'O') s[i] = '0';
        if (s[i] == 'S') s[i] = '5';
        if (s[i] == 'Z') s[i] = '2';
    }

    cout << s << endl;
}

