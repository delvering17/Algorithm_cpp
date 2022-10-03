#include <bits/stdc++.h>
using namespace std;


int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string str;
  cin >> str;

  for(char a = 'a' ; a <= 'z' ; a++)  {
    int cnt = 0;
    for(auto c : str) if(a == c) cnt++;
    cout << cnt << ' ';
  }

  return 0;
} 