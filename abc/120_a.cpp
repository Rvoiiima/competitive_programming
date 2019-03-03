#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;

int main(void) {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if ( A * C <= B) {
        printf("%d\n", C);
    } else {
        printf("%d\n", B/A);
    }
}

