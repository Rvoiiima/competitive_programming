#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

const int INF = 1000000000;
const int MAX_N = 1000;
const int MAX_M = 1000;
typedef pair<int, int> P;
typedef long long ll;

char mize[MAX_N][MAX_M+1];
int N, M;
int sx, sy, gx, gy;

int d[MAX_N][MAX_M];

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int ni, nj;

int bfs() {
    queue<P> que;

    for (int i=0; i<N; i++) {
        for(int j=0; j<M; ++j) {
            d[i][j] =INF;
        }
    }
    que.push(P(sx, sy));
    d[sx][sy] = 0;

    while(que.size()) {
        P p = que.front(); que.pop();
        if (p.first == gx && p.second == gy) {
            break;
        }

        for(int i=0; i< 4; ++i) {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];

            if (0 <= nx && nx < N && 0 <= ny && ny < M && mize[nx][ny] != '#' && d[nx][ny] == INF) {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }

    return d[gx][gy];
}

int main() {
    cin >> N >> M;
    int i, j;
    for(i=0; i<N; ++i) {
        for(j=0; j<M; ++j) {
            cin >> mize[i][j];
        }
    }

    ll ans = -1;

    for(sx=0; sx<N; ++sx) {
        for(sy=0; sy<M; ++sy) {
            for(gx=0; gx<N; ++gx) {
                for(gy=0; gy<M; ++gy) {
                    if (mize[sx][sy] == '#' or mize[gx][gy] == '#') continue;
                    ll res = bfs();
                    if (res > ans) ans = res;
                }
            }
        }
    }

    cout << ans << endl;
}
