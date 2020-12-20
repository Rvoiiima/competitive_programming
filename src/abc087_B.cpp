#include <cstdio>
using namespace std;

int main() {
    int a, b, c, x;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &x);

    int i, j, k, ans;

    for(i=0; i<a+1; i++) {
        for(j=0; j<b+1; j++) {
            for(k=0; k<c+1; k++) {

                if((500*i + 100*j + 50*k) == x) ans++;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}

