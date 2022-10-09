#include <bits/stdc++.h>
using namespace std;


int pre[5001];
int nxt[5001];
vector<int> res;
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N, K;
  cin >> N >> K;

  int len = 0;
  for(int i = 1; i <= N ; i++) {
    pre[i] = (i == 1) ? N : i - 1;
    nxt[i] = (i == N) ? 1 : i + 1;
    len++;
  }  

  int time = 1;
  for(int cur = 1; len != 0; cur = nxt[cur]) {
    if(time == K) {
      pre[nxt[cur]] = pre[cur];
      nxt[pre[cur]] = nxt[cur];
      res.push_back(cur);
      time = 1;
      len--;
    } else {
      time++;
    }

  }

  cout << '<';
  for(int i = 0 ; i < res.size() ; i++) {
    cout << res[i];
    if(i != res.size() - 1) cout << ", ";  
  } 
  cout << ">";

  return 0;
}