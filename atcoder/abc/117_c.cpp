#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(void) {
    int n,m,i;
    int x[100001];
    int y[100001];

    int ans = 0;
    scanf("%d %d", &n, &m);

    for(i=0; i<m; i++) {
        scanf("%d", &x[i]);
    }

    sort(x, x+m);
    for(i=0; i<m-1; i++) {
        y[i] = x[i+1] - x[i];
        ans += y[i];
//        printf("%d ", y[i]);
    }

    sort(y, y+(m-1), greater<int>());
/*
    for(i=0; i<=m; i++) {
        printf("%d ", y[i]);
    }
*/

    for(i=1; i<=n-1; i++) {
        ans -= y[i-1];
    }

    if (n >=m ){
        printf("%d\n", 0);
    } else {
        printf("%d\n", ans);
    }

    return 0;
}
