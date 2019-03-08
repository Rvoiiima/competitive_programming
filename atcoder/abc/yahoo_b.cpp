#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#define N 4
using namespace std;

int main(void) {
    int M[N][N];
    int i, j, k;

    for (i=0; i<N; i++) {
        for (j=0; j<N; j++) {
           M[i][j] = 0;
        }
    }

    int a, b;
    for (i=0; i<N-1; i++) {
        scanf("%d %d", &a, &b);
        M[a-1][b-1] = 1;
        M[b-1][a-1] = 1;
    }

    int ans = 0;

    for (i=0; i<N; i++) {
        if (M[0][i]) {
            M[0][i]=0;
            M[i][0]=0;
            for (j=0; j<N; j++) {
                if( M[i][j] ) {
                    M[i][j] = 0;
                    M[j][i] = 0;
                    for (k=0; k<N; k++) {
                        if (M[j][k]) {
                            ans = 1;
                        }
                    }
                }
            }
        }
    }

    if (ans) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }


}
