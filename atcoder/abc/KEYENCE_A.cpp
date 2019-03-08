#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;
#define MAX_N  100
int main(void) {
    string s;
    cin >> s;
    string t= "keyence";
    bool ans = false;
    if (s.length() == t.length() && s == t) ans = true;

    int dif;
    dif = s.length() - t.length()+1;
    string new_t;
    for(int i=0; i<t.length(); i++ ) {
        new_t = s.substr(0, i+1) + s.substr(i+dif, t.length());
//        cout << new_t <<endl;
        if (new_t == t) ans = true;
    }
    if(ans) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
