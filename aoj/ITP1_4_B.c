#include<stdio.h>
#include<math.h>
int main(void) {
    double r, pi, len, area;
    scanf("%lf", &r);
    pi = 3.141592653589;
    area = pi * pow(r,2);
    len = 2 * pi * r;

    printf("%lf %lf\n", area, len);

    return 0;
}
