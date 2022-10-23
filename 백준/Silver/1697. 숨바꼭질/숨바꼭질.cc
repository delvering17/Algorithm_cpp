#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int dist[100002];
int n, k;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    queue<int> q;
    fill(dist, dist + 100001, -1);
    q.push(n);
    dist[n] = 0;

    while(dist[k] == -1) {
        int cur = q.front(); q.pop();
        for(int idx : {cur-1, cur+1, cur * 2}) {
            if(idx < 0 || idx > 100000) continue;
            if(dist[idx] >= 0) continue;
            dist[idx] = dist[cur] + 1;
            q.push(idx);
        }
    }
    cout << dist[k];
}