#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

bool judgeRollString(string s, string t) {
    int n = (int) s.length();
    string roll_t;
    for(int i=1; i<=n; i++) {
        roll_t = t.substr(i) + t.substr(0, i);
        //cout << roll_t << endl;
        if (s==roll_t) {
            return true;
        }
    }
    return false;
}

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    bool ans = judgeRollString(s, t);

    if(ans) printf("Yes\n");
    else printf("No\n");
}
