#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;
typedef long long ll;
const ll INF = 1000000000;
const int MAX = 460;
const int MINUS = 0;
const int SHIFT = 250;

typedef pair<int, int> P;
char map[MAX][MAX];
ll dist[MAX][MAX];
/*
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
*/

int main(void) {

    int R, C, N;
    int sx, sy, gx, gy;

    int x, y, c;

    cin >> N;
    sx = 250;
    sy = 250;

    cin >> gx >> gy;
    gx += 250;
    gy += 250;
    R =MAX-1;
    C =MAX-1;

    for (x=0; x<MAX; ++x) {
        for(y=0; y<MAX; ++y) {
            map[x][y] ='.';
        }
    }

    for(int i=0; i<N; ++i) {
        cin >> x >> y;
        x += 250;
        y += 250;
        map[x][y] = '#';
    }
     
    for(x=0; x<=R; x++) {
        for(y=0; y<=C; y++) {
            dist[x][y] = INF;
        }
    }
    
    queue<P> que;

    que.push(P(sx, sy));
    dist[sx][sy] = 0;

    int dx[6] = {1, 0, -1, 1, -1, 0}, dy[6] = {1, 1, 1, 0, 0, -1};
    int nx, ny;

    ll ans= 0;


    while(que.size()) {
        P p = que.front();
        que.pop();

        for(c=0; c<6; c++) {
            nx = p.first+ dx[c];
            ny = p.second+ dy[c];

            if (MINUS <= nx && nx <= R && MINUS <= ny && ny <= C && map[nx][ny] != '#' && dist[nx][ny] == INF) {
                que.push(P(nx, ny));
                dist[nx][ny] = dist[p.first][p.second] + 1;
            }
        }
    }
            
    ans = dist[gx][gy];
    if (ans == 1000000000) {
        ans = -1;
    }
    //printMap(R,C);
    cout << ans << endl;
}
