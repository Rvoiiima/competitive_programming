#include<stdio.h>
int main(void) {
    char op;
    int x, y;
    while(1) {
        scanf("%d %c %d", &x, &op, &y);
        if(op == '?') {
            break;
        }else if(op == '+') {
            printf("%d\n", x + y);
        }else if(op == '-') {
            printf("%d\n", x - y);
        }else if(op == '*') {
            printf("%d\n", x * y);
        }else if(op == '/') {
            printf("%d\n", x / y);
        }else{
        }
    }
    return 0;
}
    
