#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end(), greater<char>());

    if ( s<t ) {
        printf("Yes\n");

    } else {
        printf("No\n");
    }
}
