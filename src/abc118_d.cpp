#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#define P pair<int, int>
using namespace std;

int numbers = {100, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[10];

    for(int i=0; i<m; i++ ) {
        scanf("%d",&a);
        a[i] = numbers[a];
    }

    sort(a, a+m);

    int num_one, ans = 0;
    for(int i=0; i<m; i++) {
        
        




    printf("%d
}
