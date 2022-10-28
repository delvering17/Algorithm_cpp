#include <bits/stdc++.h>
using namespace std;

int n, m;
char board[1002][1002];
int dist[1002][1002][2];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char c;
            cin >> c;
            board[i][j] = c;
            dist[i][j][0] = -1;
            dist[i][j][1] = -1;
        }
    }
    queue<tuple<int,int,int>> q;
    dist[0][0][0] = 0;
    q.push({0, 0, 0});
    int res = -1;
    while (!q.empty() && res == -1) {
        int x, y, w;
        tie(x, y, w) = q.front(); q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx == n -1 && ny == m -1) {
                res = dist[x][y][w] + 2;
                break;
            }
            if (nx >= n || nx < 0 || ny >= m || ny < 0) continue;
            if(board[nx][ny] == '0' && dist[nx][ny][w] == -1) {
                dist[nx][ny][w] = dist[x][y][w] + 1;
                q.push({nx, ny, w});
            }
            if(!w && board[nx][ny] == '1' && dist[nx][ny][1] == -1) {
                dist[nx][ny][1] = dist[x][y][0] + 1;
                q.push({nx, ny, 1});
            }
        }
    }
    if(n == 1 && m == 1) res = 1;
    cout << res;
    return 0;
}
