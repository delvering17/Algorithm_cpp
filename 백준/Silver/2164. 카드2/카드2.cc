#include <bits/stdc++.h>
using namespace std;


int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  queue<int> q;
  int N;
  cin >> N;

  for(int i = 1 ; i <= N ; i++) q.push(i);
  while(q.size() != 1) {
    q.pop();
    if(q.size() == 1) break;
    q.push(q.front());
    q.pop();
  } 
  cout << q.front();
}