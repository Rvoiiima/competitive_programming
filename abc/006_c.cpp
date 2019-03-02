#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#define MAX 50
using namespace std;

int n;
int ans, temp;
int maxw[MAX];

int main(void) {
    scanf("%d", &n);

    for (int i=0; i<MAX; i++) {
        maxw[i] = 0;
    }

    for(int i=0; i<n; i++) {
        scanf("%d", &temp);
        for(int j=0; j<n; j++) {
            if (temp <= maxw[j]) {
                maxw[j] = temp;
                break;
            } else if (maxw[j] == 0) {
                maxw[j] = temp;
                ans ++;
                break;
            }
        }
    }

    printf("%d\n", ans);
}
