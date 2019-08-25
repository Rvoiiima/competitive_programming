#include <iostream>
#include <functional>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(void) {
    int H, W;

    scanf("%d", &H);
    scanf("%d", &W);

    char map[500][500];

    int i, j;
    char dummy;
    for(i=0; i<H; i++) {
        scanf("%c", &dummy);
        for(j=0; j<W; j++) {
            scanf("%c", &map[i][j]);
        }
    }
    for(i=0; i<H; i++) {
        for(j=0; j<W; j++) {
            printf("%c", map[i][j]);
        }
        printf("\n");
    }

   // sort(P, P+n);

}
        
