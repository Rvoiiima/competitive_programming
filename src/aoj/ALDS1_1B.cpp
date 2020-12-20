#include <iostream>
#include <algorithm>
using namespace std;

int  gcd(int x, int y) {
    int r;
    if(x < y){
        swap(x, y);
    }

    while (y > 0) {
        r = x % y;
        x = y;
        y = r;
    }

    return x;
}

int main(void) {
    int x, y, ans;

    cin >> x;
    cin >> y;

    ans = gcd(x, y);

    cout << ans << endl;

    return 0;
}


