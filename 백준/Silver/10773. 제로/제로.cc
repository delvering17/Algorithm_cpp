#include <bits/stdc++.h>
using namespace std;

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  stack<int> S;

  int K, sum = 0;

  cin >> K;
  while(K--) {
    int n;
    cin >> n;
    if(n) {
      S.push(n);
      sum += n;
    } 
    else {
      sum -= S.top();
      S.pop();
    }
  }
  cout << sum;
}