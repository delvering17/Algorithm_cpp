#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<int> s;
    string res;
    int n;
    cin >> n;
    int idx = 1;
    bool isNo = false;

    for(int i = 1; i <= n; i++) {
        int f;
        cin >> f;

        if(!s.empty() && s.top() == f) {
            res += "-\n";
            s.pop();
        }
        else if(idx <= f) {
            while(idx <= f) {
                res += "+\n";
                s.push(idx++);
            }
            res += "-\n";
            s.pop();
        }
        else {
            res = "NO";
            isNo = true;
            break;
        }
    }
    cout << res;
}