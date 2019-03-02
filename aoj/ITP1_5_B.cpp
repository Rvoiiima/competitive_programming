#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
    int a, b, i, j;
    while(1) {
        cin >> a >> b;
        if(a == 0) {
            break;
        }

        for(i=0; i<a; i++) {
            for(j=0; j<b; j++) {
                if (i==0 || j ==0 || i==(a-1) || j ==(b-1)) {
                    printf("#");
                }else {
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

