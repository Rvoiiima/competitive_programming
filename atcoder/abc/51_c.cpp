#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 100001


int main() {
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    int dx = tx-sx, dy = ty-sy;

    cout << string(dy, 'U') << string(dx, 'R');
    cout << string(dy, 'D') << string(dx, 'L');

    cout << 'L' << string(dy+1, 'U') << string(dx+1, 'R') << 'D';
    cout << 'R' << string(dy+1, 'D') << string(dx+1, 'L') << 'U';
}

