#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
using namespace std;
#define MAX_N 100000
int main(void) {
    int N;
    int a[MAX_N], b[MAX_N], dif[MAX_N];
    int i;
    scanf("%d", &N);
    for(i=0; i<N; i++) {
        scanf("%d", &a[i]);
    }
    for(i=0; i<N; i++) {
        scanf("%d", &b[i]);
    }
    int mincount = 0;
    long long minus = 0;
    long long plus = 0;
    for(i=0; i<N; i++) {
        dif[i] = a[i] -b[i];
        if (dif[i] < 0) {minus += dif[i]; mincount ++;}
        if (dif[i] > 0) plus += dif[i];
    }
    
    bool ans = true;
    if ((-1) * minus > plus) ans = false;
    sort(dif, dif+N, greater<int>());
    int count = 0;
    long long sum = 0;
    for(count =0; count < N; count++ ) {
       if (sum >= (-1) * minus) break;
       sum += dif[count];
    }
    if (!ans) printf("%d\n", -1);
    else printf("%d\n", count+mincount);
    
}
