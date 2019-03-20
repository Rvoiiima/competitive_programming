#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
    int n;
    int h,w;

    scanf("%d", &n);
    scanf("%d", &h);
    scanf("%d", &w);

    printf("%d\n", (n-h+1) * (n-w+1));
    
}
