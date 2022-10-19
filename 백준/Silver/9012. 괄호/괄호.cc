#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while(n--) {
        string str;
        bool res = true;
        cin >> str;
        stack<char> s;
        for(auto c : str) {
            if(c == '(') {
                s.push(c);
            }
            else {
                if(s.empty()) {
                    res = false;
                    break;
                }
                else s.pop();
            }
        }
        if(!s.empty()) res = false;
        if(res) cout << "YES\n";
        else cout << "NO\n";
    }
}
