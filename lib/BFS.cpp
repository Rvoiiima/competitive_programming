#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

const int INF = 1000000000;
const int MAX = 60;

typedef pair<int, int> P;
char map[MAX][MAX];
int dist[MAX][MAX];

void printMap(int R, int C) {
    int x, y;
    for(y=0; y<R; y++) {
        for(x=0; x<C; x++) {
            printf("%c", map[y][x]);
        }
        printf("\n");
    }


    for(y=0; y<R; y++) {
        for(x=0; x<C; x++) {

            if (dist[y][x] != INF) printf("%d", dist[y][x]);
            else printf("-1");
            printf("|");
        }
        printf("\n");
    }

}

int main(void) {

    int R, C;
    int sx, sy, gx, gy;

    int x, y, c;

    scanf("%d %d", &R, &C);
    scanf("%d %d", &sx, &sy);
    scanf("%d %d", &gx, &gy);

    sy --;
    sx --;
    gy --;
    gx --;
    
    char dummy;
    for(x=0; x<R; x++) {
        scanf("%c", &dummy);
        for(y=0; y<C; y++) {
            scanf("%c", &map[x][y]);
        }
    }
     
    for(x=0; x<R; x++) {
        for(y=0; y<C; y++) {
            dist[x][y] = INF;
        }
    }
    
    queue<P> que;

    que.push(P(sx, sy));
    dist[sx][sy] = 0;

    int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
    int nx, ny;


    while(que.size()) {
        P p = que.front();
        que.pop();

        for(c=0; c<4; c++) {
            nx = p.first+ dx[c];
            ny = p.second+ dy[c];

            if (0 <= nx && nx < R && 0 <= ny && ny <= C && map[nx][ny] != '#' && dist[nx][ny] == INF) {
                que.push(P(nx, ny));
                dist[nx][ny] = dist[p.first][p.second] + 1;
            }
        }
    }
            
    //printMap(R,C);
    printf("%d\n", dist[gx][gy]);
}
