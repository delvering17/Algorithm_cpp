#include <bits/stdc++.h>
using namespace std;


int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin >> N;

  stack<int> S;

  while(N--) {
    string str;
    cin >> str;
    
    if(str == "push") {
      int num;
      cin >> num;
      S.push(num);
    }
    else if(str == "pop") {
      if(S.empty()) cout << -1 << "\n";
      else {
        cout << S.top() << "\n";
        S.pop();
      } 
    }
    else if(str == "size") {
      cout << S.size() << "\n";
    }
    else if(str == "empty") {
      if(S.empty()) cout << 1 << "\n";
      else cout << 0 << "\n";
    }
    else {
      if(S.empty()) cout << -1 << "\n";
      else cout << S.top() << "\n";
    }
  }
}
