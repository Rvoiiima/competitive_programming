#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MAXN 201

int main() {
    int dp[MAXN];

    int d, n;

    int t[MAXN];
    int a[MAXN], b[MAXN], c[MAXN];

    cin >> d >> n;

    for(int i=0; i<d; i++) {
        cin >> t[i];
    }

    for(int i=0; i<n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }

    int maxc;
    int dp[MAXN][MAXN];
    for(int i=0; i<d; i++) {
        maxc = -1;
        for(int j=0; j<n; j++) {
            if (a[j] <= t[i] and t[i] <= b[j]) {


}

