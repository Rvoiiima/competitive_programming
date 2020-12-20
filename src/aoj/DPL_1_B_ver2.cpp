#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>
#define MAX 100
#define MAX_W 10000
using namespace std;

int n, W;
int v[MAX], w[MAX];
int dp[MAX+1][MAX_W+1];

int main(void) {
    scanf("%d %d", &n, &W);
    for(int i=0; i<n; i++) {
        
    scanf("%d %d", &v[i], &w[i]);
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<=W; j++) {
            if (j < w[i]) {
                dp[i+1][j] = dp[i][j];
            } else {
                dp[i+1][j] = max(dp[i][j], dp[i][j-w[i]]+v[i]);
            }
        }
    }

    printf("%d\n", dp[n][W]);
}

    
