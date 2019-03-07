#include <stdio.h>

int solve(int i, int m);

int n;
int A[25];
int main (void) {
    int q, m;
    scanf("%d", &n);
    int i;
    for (i = 0 ; i < n ; i ++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &q);
    for (i = 0 ; i < q ; i ++) {
        scanf("%d", &m);
        if (solve (0, m)) printf("yes\n");
        else printf("no\n");
    }

    return 0;
}

int solve (int i, int m) {
    int res;
    if(m == 0) return 1;
    if (i >= n) return 0;

    res = solve (i + 1, m) || solve (i + 1, m - A[i]);
    return res;
}

