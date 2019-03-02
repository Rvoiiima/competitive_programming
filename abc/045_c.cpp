#include <cstdio>
#include <string>
#include <iostream>
using namespace std;
 
int main() {
 
    string s;
    cin >> s;
 
    long long  ans = 0, sum = 0, ret = 0;
    int i, j;
 
    for(i=0; i< (1<<(s.length()-1)); i++) {
        ret = s[0] - '0';
        sum = 0;
 
        for(j=0; j<(s.length()-1); j++) {
            if(i & (1<<j )) {
                sum += ret;
                ret = 0;
            }
            ret = ret*10 + s[j+1] - '0';
        }
        
        sum += ret;
        ans += sum;
    }
    printf("%lld\n", ans);
 
}
