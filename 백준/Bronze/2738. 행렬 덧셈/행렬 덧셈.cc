#include <bits/stdc++.h>
using namespace std;

int n, m, num;
int res[102][102];
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> res[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> num;
            cout << res[i][j] + num << ' ';
        }
        cout << '\n';
    }
    return 0;
}
