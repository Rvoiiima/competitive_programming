#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main(void) {
    
    int n;
    string a, b, c;
    scanf("%d", &n);
    cin >> a;
    cin >> b;
    cin >> c;
    int cnt, ans = 0;
    for(int i=0; i<n; i++) {
        cnt = 0;
        if (a[i] == b[i]) cnt ++;
        if (a[i] == c[i]) cnt ++;
        if (b[i] == c[i]) cnt ++;
        if (cnt==0) ans +=2;
        else if (cnt==1) ans += 1;
    }

    printf("%d\n", ans);
       


    return 0;
}
