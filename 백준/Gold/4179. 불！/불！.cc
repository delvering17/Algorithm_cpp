#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string board[1002];
int fire[1002][1002];
int jh[1002][1002];
int n, m;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> board[i];
    for(int i = 0; i < n; i++) {
        fill(fire[i], fire[i] + m, -1);
        fill(jh[i], jh[i] + m, -1);
    }

    queue<pair<int,int>> Q_fire;
    queue<pair<int,int>> Q_jh;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(board[i][j] == 'F') {
                Q_fire.push({i, j});
                fire[i][j] = 0;
            }
            if(board[i][j] == 'J') {
                Q_jh.push({i, j});
                jh[i][j] = 0;
            }
        }
    }

    while(!Q_fire.empty()) {
        auto cur = Q_fire.front(); Q_fire.pop();
        for(int i = 0; i < 4; i++) {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx >= n || nx < 0 || ny >= m || ny < 0) continue;
            if(fire[nx][ny] >= 0 || board[nx][ny] == '#') continue;
            fire[nx][ny] = fire[cur.X][cur.Y] + 1;
            Q_fire.push({nx, ny});
        }
    }

    while(!Q_jh.empty()) {
        auto cur = Q_jh.front(); Q_jh.pop();
        for(int i = 0; i < 4; i++) {
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];
            if(nx >= n || nx < 0 || ny >= m || ny < 0) {
                cout << jh[cur.X][cur.Y] + 1;
                return 0;
            }
            if(jh[nx][ny] >= 0 || board[nx][ny] == '#' ) continue;
            if(fire[nx][ny] != -1 && (fire[nx][ny] <= jh[cur.X][cur.Y] + 1)) continue;
            jh[nx][ny] = jh[cur.X][cur.Y] + 1;
            Q_jh.push({nx, ny});
        }
    }
    cout << "IMPOSSIBLE";
}