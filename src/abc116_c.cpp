#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;

int main(void) {
    int n;
    int h=0, t;
    int times=0;

    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &t);
        times += max(t-h, 0);
        h = t;
    }

    printf("%d\n", times);

    return 0;
}
