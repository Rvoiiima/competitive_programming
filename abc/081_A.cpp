#include <iostream>
using namespace std;

int main(void) {
    string s;
    cin >> s;
    int count = 0;
    if (s[0] == '1') count ++;
    if (s[1] == '1') count ++;
    if (s[2] == '1') count ++;
    printf("%d\n", count);
    return 0;
}

