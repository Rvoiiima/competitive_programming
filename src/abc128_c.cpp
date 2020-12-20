#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 11

int k[MAXN], p[MAXN];
int switches[MAXN][MAXN];
int n,m;

int main() {
    cin >> n >> m;
    for(int i=0; i<m; i++) {
        cin >> k[i];
        for(int j=0; j<k[i]; j++) {
            cin >> switches[i][j];
            switches[i][j] --;
        }
    }

    
    for(int i=0; i<m; i++) {
        cin >> p[i];
    }

    int ans = 0;
    for(int i=0; i< (1<<n); i++) {
        bool all_light = true;
        for(int j=0; j<m; j++) {
            int num_switch = 0;
            for(int l=0; l<k[j]; l++) {
                if ((i >> switches[j][l]) & 1) num_switch++;
            }
            if (num_switch%2 != p[j]) all_light = false;
            if (num_switch%2 != p[j]) all_light = false;
        }
        if ( all_light ) ans ++;
    }

    cout << ans << endl;
}
