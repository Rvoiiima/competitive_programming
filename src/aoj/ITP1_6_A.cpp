#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
    int n, a[101];
    scanf("%d", &n);
    for(int i=n-1; i>=0; i--) {
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++){
        if(i) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
}
