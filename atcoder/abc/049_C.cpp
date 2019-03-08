#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int i,j;
    string s;
    string words[4] = { "dream", "dreamer", "erase", "eraser" };
    cin >> s;

    reverse(s.begin(), s.end());
    for(i=0; i<4; i++) reverse(words[i].begin(), words[i].end());

    
    bool ans = true;
    bool can_devide = false;

    for(i=0; i<s.size();) {
        can_devide = false;
        for(j=0; j<4; j++) {
            if (s.substr(i, words[j].size()) == words[j]) {
                i += words[j].size();
                can_devide = true;
            } 
        }

        if (!can_devide) {
            ans = false;
            break;
        }
    }

    if (ans == true) {
        printf("YES\n");
    }else {
        printf("NO\n");
    }

    return 0;
}
