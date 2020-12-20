#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    int i, n;
    int a[101];
    int alice=0, bob=0;
    scanf("%d", &n);

    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    sort(a, a+n, greater<int>());
    
    for(i=0; i<n; i++) {
        //printf("%d\n", a[i]);
        if (i%2 == 0) {
            alice += a[i];
        } else {
            bob += a[i];
        }
    }
    printf("%d\n", alice-bob);

    return 0;
}
