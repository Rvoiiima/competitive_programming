#include <iostream>
#include <cstdio>
#define MAX 500
using namespace std;

int w, h;
char map[MAX][MAX];
bool reached[MAX][MAX];

void printMap(int w, int h) {
    int x, y;
    for(x=0; x<h; x++) {
        for(y=0; y<w; y++) {
            printf("%c", map[x][y]);
        }
        printf("\n");
    }

}

void dfs(int y, int x) {
    if ( x < 0 || w <= x || y < 0 || h <= y || map[y][x] == '#') return;
    if (reached[y][x]) return;
    reached[y][x] = true;

    dfs(y, x-1);
    dfs(y, x+1);
    dfs(y-1, x);
    dfs(y+1, x);
}
int main () {
    int sx, sy, gx, gy;
    int i, j;

    scanf("%d %d", &h, &w);

    for(i=0; i<h; i++) {
        for(j=0; j<w; j++) {
            cin >> map[i][j];
            if (map[i][j] == 's') {
                sx = j;
                sy = i;
            } else if(map[i][j] == 'g') {
                gx = j;
                gy = i;
            }
        }
    }

//    printMap(w, h);
    
    dfs(sy, sx);

    if ( reached[gy][gx] ) printf("Yes");
    else printf("No");

    printf("\n");
}
