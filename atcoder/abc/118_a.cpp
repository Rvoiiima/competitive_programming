#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;

int main(void) {
    int a,b;
    scanf("%d %d",&a, &b);
    if ( b % a == 0) {
        printf("%d\n", a+b);
    } else {
        printf("%d\n", b-a);
    }
}
