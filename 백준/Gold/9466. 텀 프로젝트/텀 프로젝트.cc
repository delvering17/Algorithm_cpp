#include <bits/stdc++.h>
using namespace std;

int t, n;

int board[100002];
int vis[100002];

void dfs(int k) {
    int cur = k;
    while(true) {
        vis[cur] = k;
        cur = board[cur];
        if (vis[cur] == k) {
            while(vis[cur] != -1) {
                vis[cur] = -1;
                cur = board[cur];
            }
            return;
        }
        else if (vis[cur] != 0) return;
    }

}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> n;
        fill(vis + 1, vis + n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cin >> board[i];
        }
        for (int i = 0; i <= n; i++) {
            if(vis[i] == 0) dfs(i);
        }
        int res = 0;
        for (int i = 1; i <= n; i++) {
            if (vis[i] != -1) res++;
        }
        cout << res << '\n';
    }
}
