#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#define MAX 101
using namespace std;

int main(void) {
    int T, N, temp,A[MAX], M, B[MAX];

    scanf("%d", &T);
    scanf("%d", &N);

    for(int i=0; i<N; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &M);

    for(int i=0; i<M; i++) {
        scanf("%d", &B[i]);
    }


    bool flag, ans=true;
    int i, j;
    if (N < M ) {
        ans = false;
    } else {

        for(i=0; i<M; i++) {
            flag = false;
            for(j=0; j<N; j++) {
                if ( A[j] <= B[i] && B[i] - A[j] <= T) {
                   flag = true; 
                   break;
                }
            }

            if (!flag) {
                ans = false;
                break;
            }
        }
    }

    if (ans) {
        printf("yes\n");
    } else {
        printf("no\n");
    }
}
