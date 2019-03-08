#include <iostream>
#include <algorithm>
#include <cstdio>

using namespace std;

int main(void) {
    int n, i;
    double ans;
    scanf("%d", &n);
    
    int l[120];
    for(i=0; i<n; i++) {
        scanf("%d", &l[i]);
        
    }

    sort(l, l+n, std::greater<int>() );
    int comp = 0;

    for(i=1; i<n; i++) {
        comp += l[i];
        
    }
    //printf("%d %d", l[0], comp);

    if (l[0] < comp) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
