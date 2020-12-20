#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int siz = s.size();
    int ans = 1;
    for(int i = 1; i < siz; i += 2) {
        if(s.at(i) == '+') {
            ans++;
        } else if(s.at(i) == '-') {
            ans--;
        }
    }
    cout << ans << endl;
}