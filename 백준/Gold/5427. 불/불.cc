#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[1002][1002];
int vf[1002][1002];
int vs[1002][1002];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int n,m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        queue<pair<int,int>> qf;
        queue<pair<int,int>> qs;
        cin >> m >> n;

        for (int i = 0; i < n; i++) {
            fill(board[i], board[i] + m, -1);
            fill(vf[i], vf[i] + m, -1);
            fill(vs[i], vs[i] + m, -1);
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char c;
                cin >> c;
                if(c == '*') {
                    vf[i][j] = 0;
                    qf.push({i, j});
                } else if(c == '@') {
                    vs[i][j] = 0;
                    qs.push({i, j});
                }
                if(c != '#') board[i][j] = 0;
            }
        }

        while(!qf.empty()) {
            auto cur = qf.front(); qf.pop();
            for (int i = 0; i < 4; i++) {
                int nx = cur.X + dx[i];
                int ny = cur.Y + dy[i];
                if(nx >= n || nx < 0 || ny >= m || ny < 0) continue;
                if(vf[nx][ny] >= 0 || board[nx][ny] == -1) continue;
                vf[nx][ny] = vf[cur.X][cur.Y] + 1;
                qf.push({nx, ny});
            }
        }
        bool res = false;
        while(!qs.empty() && !res) {
            auto cur = qs.front(); qs.pop();
            for (int i = 0; i < 4; i++) {
                int nx = cur.X + dx[i];
                int ny = cur.Y + dy[i];
                if (nx >= n || nx < 0 || ny >= m || ny < 0) {
                    cout << vs[cur.X][cur.Y] + 1 << '\n';
                    res = true;
                    break;
                }
                if(vs[nx][ny] >= 0 || board[nx][ny] == -1) continue;
                if(vf[nx][ny] != -1 && vf[nx][ny] <= vs[cur.X][cur.Y]+1) continue;
                vs[nx][ny] = vs[cur.X][cur.Y] + 1;
                qs.push({nx, ny});
            }
        }
        if(!res) cout << "IMPOSSIBLE\n";
    }
}