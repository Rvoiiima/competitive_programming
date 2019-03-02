#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

const int INF = 1000000000;
const int MAX = 1000;
typedef pair<int, int> P;

char map[MAX][MAX];
int dist[MAX][MAX];
int h,w,n;

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

P bfs (int si, int sj, char hp) {
    queue<P> que;

    que.push(P(si, sj));
    dist[si][sj] = 0;

    int di[4] = {1, 0, -1, 0}, dj[4] = {0, 1, 0, -1};
    int ni, nj;


    while(!que.empty()) {
        P p = que.front();
        que.pop();
        if (map[p.first][p.second] == hp) {
            return make_pair(p.first, p.second);
        }

        for(int c=0; c<4; c++) {
            ni = p.first+ di[c];
            nj = p.second+ dj[c];

            if (0 <= ni && ni < h && 0 <= nj && nj <= w && map[ni][nj] != 'X' && dist[ni][nj] == INF) {
                que.push(P(ni, nj));
                dist[ni][nj] = dist[p.first][p.second] + 1;
            }
        }
    }
}


int main(void) {

    int si, sj, gi, gj;
    int ans = 0;

    int i, j, c;

    scanf("%d %d %d", &h, &w, &n);

    
    for(i=0; i<h; i++) {
        for(j=0; j<w; j++) {
            cin >> map[i][j];
            if (map[i][j] == 'S') {
                si = i;
                sj = j;
            }
        }
    }
     
    int hp = 1;
    P p = make_pair(si, sj);

    while (hp < n+1) {
        for(i=0; i<h; i++) {
            for(j=0; j<w; j++) {
                dist[i][j] = INF;
            }
        }

        p = bfs(p.first, p.second, '0'+hp);
        ans += dist[p.first][p.second];
        hp ++;
    }
    
    printf("%d\n", ans);
}
