#include <bits/stdc++.h>
using namespace std;
 
int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
 
    int h, w, sx, sy, gx, gy;
    cin >> h >> w;
    cin >> sx >> sy;
    cin >> gx >> gy;
    sx--; sy--; gx--; gy--;
 
    char C[h][w] = {};
    int D[h][w];
    queue<pair<int, int>> q;
    q.push(make_pair(sx, sy));
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> C[i][j];
            D[i][j] = 1e9;
        }
    }
    D[sx][sy] = 0;
 
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};    
 
    while(!(q.empty())){
        pair<int, int> tmp = q.front();
        q.pop();
        int nx, ny;
        for (int i = 0; i < 4; i++) {
            nx = tmp.first + dx[i];
            ny = tmp.second + dy[i];
            if(nx < 0 || ny < 0 || nx >= h || ny >= w || C[nx][ny] == '#'){
                continue;
            }
            if(D[tmp.first][tmp.second] + 1 < D[nx][ny]){
                D[nx][ny] = D[tmp.first][tmp.second] + 1;
                q.push(make_pair(nx, ny)); 
            }
            if(nx == gx && ny == gy){
                cout << D[nx][ny] << endl;
                return 0;
            }
        }
    }
    
}
