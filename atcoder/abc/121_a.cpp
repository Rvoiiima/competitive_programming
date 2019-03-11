#include <iostream>
using namespace std;

int main(void) {
    int H, W, h, w;

    cin >> H >> W;
    cin >> h >> w;

    cout << H*W - (H*w + h*W - (h*w)) << endl;
}

