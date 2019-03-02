#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
    int n, c, sum=0;
    int cakes[100];
    scanf("%d", &n);
    scanf("%d", &c);


    for(int i = 0 ; i < c; i++) {
        scanf("%d", &cakes[i]);
        sum += cakes[i];
    }
    
    if (sum%(n+1) == 0) {
        printf("%d\n", sum/(n+1));
    } else {
        printf("%d\n", sum/(n+1) + 1);
    }
    
    return 0;
}
