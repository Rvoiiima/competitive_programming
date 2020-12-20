#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a+b>=c) {
        printf("%d\n", b+c);
    } else {
        printf("%d\n", b+(a+b)+1);
    }

    return 0;
}
