#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(true) {
        string str;
        bool res = true;
        getline(cin, str);
        if(str == ".") break;
        stack<int> s;
        for(auto c : str) {
            if(c == '(' || c == '[') s.push(c);
            else if(c == ')') {
                if(s.empty() || s.top() != '(') {

                   res = false;
                    break;
                }
                else s.pop();
            }
            else if(c == ']') {
                if(s.empty() || s.top() != '[') {
                    res = false;
                    break;
                }
                else s.pop();
            }
        }

        if(!s.empty() || !res) cout << "no" << '\n';
        else cout << "yes" << '\n';
    }

}
