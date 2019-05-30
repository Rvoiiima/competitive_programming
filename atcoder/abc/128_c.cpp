#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 11


int main() {
    int n,m;
    cin >> n >> m;
    int k;
    int s_l[MAXN][MAXN];
    int s;
    for(int i=0; i<m; i++) {
        cin >> k;
        for(int j=0; j<k; j++) {
            cin >> s;
            s_l[i][s-1] = 1;
        }
    }

    int p[MAXN];
    for(int i=0; i<m; i++) {
        cin >> p[i];
    }

    int cnt_ans, cnt_bit;

    for(k=0; k < (1<<n); k++) {
        bool check = true;
        
        for(int i=0; i<m; i++) {
            cnt_bit = 0;
            for(int j=0; j<n; j++) {
                if (((k>>j) & 1) && s_l[i][j]){
                    cnt_bit+= 1;
                }
            }
            if (cnt_bit % 2 != p[i]){
                check = false;
            }
        }

        if ( check == true) cnt_ans++;
    }
    cout << cnt_ans << endl;

}

