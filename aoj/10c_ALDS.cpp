#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define MAX 1000

int lcs(string X, string Y) {
    int c[MAX+1][MAX+1];
    int m = X.size();
    int n = Y.size();
    int i, j;
    int maxlen = 0;
    X = " " + X;
    Y = " " + Y;

    for (i = 1 ; i <= m ; i++ ) c[i][0] = 0;
    for (j = 1 ; j <= n ; j++ ) c[0][j] = 0;

    for(i = 1 ; i <= m ; i++ ) {
        for(j = 1 ; j <= n ; j++ ) {
            if (X[i] == Y[j]) {
                c[i][j] = c[i-1][j-1] + 1;
            }else {
                c[i][j] = max(c[i][j-1], c[i-1][j]);
            }
            maxlen = max(maxlen, c[i][j]);
        }
    }
    return maxlen;
}

int main (void) {
    int N, i;
    string a, b;

    cin >> N;

    for(i = 0 ; i < N ; i++) {
        cin >> a;
        cin >> b;
        cout << lcs(a, b) << endl;
    }

    return 0;
}
