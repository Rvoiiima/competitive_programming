#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(void) {
    int n, a, b;
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);

    int mi, ma;
    ma= min(a, b);
    if (a+b < n) {
        mi = 0;
    } else {
        mi = a+b-n;
    }

    printf("%d %d\n", ma, mi);

    return 0;
}
