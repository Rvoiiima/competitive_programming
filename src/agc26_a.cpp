#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main(void) {
    int i, n;
    int t=0, ans=0;
    scanf("%d", &n);
    vector<int> v(n);
    
    for(i=0; i<n; i++) {   
        scanf("%d", &v[i]);
    }

   

    while(t<n) {
        if (v[t] == v[t+1]) {
            ans ++;
            t += 2;
        }else{
            t++;
        }
    }

    printf("%d\n", ans);
}
