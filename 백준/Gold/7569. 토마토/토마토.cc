#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second


int board[102][102][102];
int dist[102][102][102];
int dx[6] = {-1, 1, 0, 0, 0, 0};
int dy[6] = {0,0,-1,1,0,0};
int dz[6] = {0,0,0,0,-1,1};
int m,n,h;
queue<tuple<int,int,int>> q;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n >> h;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < m; k++) {
                cin >> board[j][k][i];
                if(board[j][k][i] == 1) q.push({j,k,i});
                if(board[j][k][i] == 0) dist[j][k][i] = -1;
            }
        }
    }
    while(!q.empty()) {
        auto cur = q.front(); q.pop();
        int curX, curY, curZ;
        tie(curX, curY, curZ) = cur;
        for(int i = 0; i < 6; i++) {
            int nx = curX + dx[i];
            int ny = curY + dy[i];
            int nz = curZ + dz[i];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h) continue;
            if(dist[nx][ny][nz] >= 0) continue;
            q.push({nx, ny, nz});
            dist[nx][ny][nz] = dist[curX][curY][curZ] + 1;
        }
    }

    int res = 0;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < m; k++) {
                if(dist[j][k][i] == -1) {
                    cout << -1;
                    return 0;
                }
                res = max(res, dist[j][k][i]);
            }
        }
    }
    cout << res;
    return 0;
}