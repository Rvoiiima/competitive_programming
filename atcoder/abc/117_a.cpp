#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
    int t, x;
    double ans;
    scanf("%d %d", &t, &x);
    ans = t/(x+0.0);

    printf("%.5f\n", ans);

    return 0;
}
