#include <cstdio>
using namespace std;

int main() {
    int n, y;
    scanf("%d", &n);
    scanf("%d", &y);

    int i, j, flag=0;
    int ans[3]={-1, -1, -1};
    int total, k;
    for (i=0; i<n+1; i++) {
        for (j=0; i+j<n+1; j++) {
            k = n-i-j;
            total = 10000*i + 5000*j + 1000*k;
            if(total == y) {
                ans[0] = i;
                ans[1] = j;
                ans[2] = n-i-j;
            }
        }
    }
    
    for(i=0; i<3; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");

    return 0;
}


