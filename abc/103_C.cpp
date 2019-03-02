#include <cstdio>

int main() {
    int n;
    int a[3100];
    int ans=0;

    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }


    for(int i=0; i<n; i++) {
        ans += a[i] -1;
    }

    printf("%d\n", ans);
}

