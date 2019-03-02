#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    if (2*k-1 <= n) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
