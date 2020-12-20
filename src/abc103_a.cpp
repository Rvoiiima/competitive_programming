#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    vector<int> a(3);
    int i;
    int sum;
    for(i=0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    
    sort(a.begin(), a.end());
    
    sum = abs(a[2]-a[1]) + abs(a[1] - a[0]);

    printf("%d\n", sum);

    return 0;

}
