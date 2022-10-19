#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<int> q;
    int N, K;
    cin >> N >> K;

    for(int i = 1 ; i <= N ; i++) q.push(i);

    cout << '<';
    while(!q.empty()) {
        for(int i = 1; i < K; i++) {
            int num = q.front();
            q.pop();
            q.push(num);
        }
        cout << q.front();
        q.pop();
        if(!q.empty()) cout << ", ";
        else cout << '>';
    }
}