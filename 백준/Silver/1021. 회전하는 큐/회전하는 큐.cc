#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  deque<int> DQ;
  
  int N, M, cnt = 0;
  cin >> N >> M;
  for(int i = 1 ; i <= N ; i++) DQ.push_back(i);
  
  while(M--) {
    int num;
    cin >> num;

    int idx = find(DQ.begin(), DQ.end(), num) - DQ.begin();
    while(true) {
      if(DQ.front() == num) {
        DQ.pop_front();
        break;
      }
      else {
        if(idx < DQ.size() - idx) {
          DQ.push_back(DQ.front());
          DQ.pop_front();
        }
        else {
          DQ.push_front(DQ.back());
          DQ.pop_back();
        }
        cnt++;
      }
    }
  }
  cout << cnt;
  return 0;  
}