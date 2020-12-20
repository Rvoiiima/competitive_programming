#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#define MAX 30
using namespace std;

int main(void) {
    int n, m;
    int k, ai;
    int  a[MAX][MAX];
    int likes[MAX] = {};
    int ans = 0;
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++ ) {
        scanf("%d", &k);   
        for(int j=0; j<k; j++) {

            scanf("%d", &ai);
            likes[ai-1] ++;
        }
    }



    for(int i=0; i<m; i++) {
        if (likes[i] == n) ans ++;
    }

    printf("%d\n", ans);
}
