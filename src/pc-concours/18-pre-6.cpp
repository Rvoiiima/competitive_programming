#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 300001

int gcd(int a, int b) {
    if(a < b) swap(a, b);
    if (b==0) return a;
    return gcd(b, a%b);
}

int A[MAXN], B[MAXN];
int n, q;
int x,y;
int tmp;
int main() {
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> A[i];
        B[i] = A[i];
    }

    sort(B, B+n);

    cin >> q;

    int cnt =0;

    for(int i=0; i<n; i++) {
        if (A[i] == B[i]) cnt ++;
    }

    int ans;
    for(ans=0; ans<q; ans++) {
        cin >> x >> y;
        x--;
        y--;
        if (cnt == n) break;
        if (A[x] == B[x]) cnt--;
        if (A[y] == B[y]) cnt--;
        
        tmp = A[x];
        A[x] = A[y];
        A[y] = tmp;

        if (A[x] == B[x]) cnt++;
        if (A[y] == B[y]) cnt++;
    } 
    if (cnt != n) ans=-1;
    cout << ans << endl;

}

