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

int knapsack(int i, int j) {
    int res;

    if (dp[i][j] >= 0) {
        return dp[i][j];
    }

    if (i==n) {
        res = 0;
    } else if (j < w[i]) {
        res = knapsack(i+1, j);
    } else {
        res = max(knapsack(i+1, j), knapsack(i+1, j-w[i]) + v[i]);
    }
    dp[i][j] = res;
    return res;
}



int main(void) {
    scanf("%d %d", &n, &W);
    for(int i=0; i<n; i++) {
        
    scanf("%d %d", &v[i], &w[i]);
    }

    memset(dp,-1, sizeof(dp));

    printf("%d\n", knapsack(0, W));

}
