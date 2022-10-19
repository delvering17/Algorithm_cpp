#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    bool isLaser = true;
    long cnt = 0;
    stack<char> s;
    for(auto c : str) {
        if(c == '(') {
            s.push(c);
            isLaser = true;
        }
        else {
            if (isLaser) {
                if(s.size() == 1) s.pop();
                else {
                    s.pop();
                    cnt += s.size();
                    isLaser = false;
                }
            } else {
                cnt++;
                s.pop();
            }
        }
    }
    cout << cnt;
}
