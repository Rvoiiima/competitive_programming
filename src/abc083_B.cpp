#include <iostream>
using namespace std;

int main() {
    int ans=0, i;
    int n, a, b;
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);
    int sum=0, num;

    for(i=1; i<=n; i++) {
        sum = 0;
        num = i;
        while(num > 0) {
            sum += num%10;
            num /=10;
        }

        if( sum >=a && sum <=b) {
            // printf("%d ", i);
            ans += i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
                

