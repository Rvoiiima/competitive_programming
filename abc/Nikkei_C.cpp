#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>

using namespace std;
#define MAX_N 100000

int main(void) {
    int n;
    
    int a[MAX_N], b[MAX_N];

    scanf("%d", &n);
    vector<pair<int, int> > pairs(n);
    int i;
    for(i=0; i<n; i++) {
        scanf("%d %d", &a[i], &b[i]);
        pairs[i] = make_pair(a[i]+b[i], b[i]);
    }

    long long fi=0, se=0;
    sort(pairs.begin(), pairs.end(), greater<pair<int, int> >());

    for(i=0; i<n; i++) {
        if (i%2==0) fi += pairs[i].first-pairs[i].second;
        else se += pairs[i].second;
    }

    printf("%lld\n", fi-se);
    return 0;
}
