#include <vector>
#include <cassert>
#include <iostream>
using namespace std;
const int mod = 1000000007;

int main(void) {
    int H, W, K;

    cin >> H >> W >> K;

    vector< vector<int> > dp(H+1, vector<int>(W, 0)); // make 2 dim list

    dp[0][0] = 1;

    for(int i=0; i<H; ++i) {
        for (int j=0; j<W; ++j) {
            for(int k=0; k < (1 << (W-1)); ++k) { // set bar using bits
                bool flag = true;

                for(int l=0; l < W-2; ++l) { 
                    if  (((k >> l) & 1) && ((k >> (l+1)) & 1))  { // slide bits for number l

                        flag = false; // invalid case
                    }
                }

                if (flag) {
                    if (j>=1 && ((k >> (j-1)) & 1)) {
                        dp[i+1][j-1] += dp[i][j];
                        dp[i+1][j-1] %= mod;

                    } else if (j <= W-2 && ((k >> j) & 1)) {
                        dp[i+1][j+1] += dp[i][j];
                        dp[i+1][j+1] %= mod;
                    } else {
                        dp[i+1][j] += dp[i][j];
                        dp[i+1][j] %= mod;
                    }

                }
            }
        }
    }

    cout << dp[H][K-1] << endl;
}


