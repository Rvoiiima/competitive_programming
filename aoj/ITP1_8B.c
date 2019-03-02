#include <stdio.h>

int main( void ) {
    int x[1000], digit,sum ;
    while(11) {
        scanf("%d", &x );
        if (x == 0 ) break;
        sum = 0;
        while (x != 0) {

            digit = x % 10;
            sum += digit;
            x = x / 10;
        }
        printf("%d\n", sum );
    }
}

