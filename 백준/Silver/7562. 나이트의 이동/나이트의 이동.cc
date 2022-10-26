#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int n;
int ax, ay;
int bx, by;
int dist[302][302];
int dx[8] = {-2,-2,-1,-1,1,1,2,2};
int dy[8] = {-1,1,-2,2,-2,2,-1,1};
queue<pair<int,int>> q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        cin >> ax >> ay >> bx >> by;
        for(int i = 0 ; i < n; i++) fill(dist[i], dist[i] + n, -1);
        q.push({ax, ay});
        dist[ax][ay] = 0;
        while(!q.empty()) {
            auto cur = q.front(); q.pop();
            for(int i = 0 ; i < 8; i++) {
                int nx = cur.X + dx[i];
                int ny = cur.Y + dy[i];
                if(nx >= n || nx < 0 || ny >= n || ny < 0) continue;
                if(dist[nx][ny] >= 0) continue;
                dist[nx][ny] = dist[cur.X][cur.Y] + 1;
                q.push({nx, ny});
            }
        }
        cout << dist[bx][by] << '\n';
    }

}