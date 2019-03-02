#include<stdio.h>

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", x/y);
    printf("%d\n", x%y);
    printf("%.8lf\n", 1.0*x/y);
    return 0;
}
