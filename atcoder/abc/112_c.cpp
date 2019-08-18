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
    int n;
    cin >> n;
    vector<int> vx(n);
    vector<int> vy(n);
    vector<int> vh(n);
    int tmp = 0;
    rep(i, n) {
        cin >> vx[i] >> vy[i] >> vh[i];
        if (vh[i]) tmp = i;
    }

    int ans_x, ans_y, ans_h;
    for(int x=0; x<=100; ++x) {
        for(int y=0; y<=100; ++y) {
            int H = vh[tmp] + abs(vx[tmp]-x) + abs(vy[tmp]-y);

            bool check = true;
            for(int i=0; i<n; ++i) {
                if (vh[i] > 0 && H - vh[i] != abs(vx[i]-x) + abs(vy[i]-y)) check = false; 
                if (vh[i] == 0 && H > abs(vx[i]-x) + abs(vy[i]-y)) check = false;
            }
            if (check) {
                ans_x = x;
                ans_y = y;
                ans_h = H;
            }

        }
    }

    cout << ans_x << " " << ans_y << " " << ans_h << endl;


}

