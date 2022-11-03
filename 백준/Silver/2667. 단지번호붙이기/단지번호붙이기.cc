#include <bits/stdc++.h>
using namespace std;
# define X first
# define Y second

int n;
char board[27][27];
bool vis[27][27];
vector<int> v;
queue<pair<int,int>> q;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0,-1,0,1};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            char c;
            cin >> c;
            board[i][j] = c;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == '0' || vis[i][j]) continue;
            vis[i][j] = true;
            q.push({i, j});
            int res = 1;
            while (!q.empty()) {
                auto cur = q.front(); q.pop();
                for (int k = 0; k < 4; k++) {
                    int nx = cur.X + dx[k];
                    int ny = cur.Y + dy[k];
                    if (nx >= n || nx < 0 || ny >= n || ny < 0) continue;
                    if (board[nx][ny] == '0' || vis[nx][ny]) continue;
                    res++;
                    vis[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
            v.push_back(res);
        }
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for (int i : v) cout << i << '\n';
    return 0;
}
