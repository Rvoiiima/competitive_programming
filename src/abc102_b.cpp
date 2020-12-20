#include <vector>
#include <cmath>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main(){
    int i, N;
    scanf("%d", &N);
    vector<int> A(N);

    for(i=0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int minv = A[0];
    int maxv = A[0];

    for(i=1; i<N; i++) {
        if (minv > A[i])
            minv = A[i];
        if (maxv < A[i])
            maxv = A[i];
    }

    printf("%d\n", maxv-minv);
    return 0;
}
