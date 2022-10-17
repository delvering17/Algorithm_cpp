#include <bits/stdc++.h>
using namespace std;

void parse(string str, deque<int>& DQ) {
  int num = 0;
  for(int i = 1 ; i+1 < str.size(); i++) {
    if(str[i] != ',') {
      num = 10 * num + (str[i] - '0');
    }
    else {
      DQ.push_back(num);
      num = 0;
    }
  }
  if(num != 0) DQ.push_back(num);
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int T;
  cin >> T;
  while(T--) {
    deque<int> DQ;
    string str, arr;
    int sz, r = 0;
    bool er = false;
    cin >> str >> sz >> arr;
    parse(arr, DQ);

    for(int i = 0; i < str.size(); i++) {
      if(str[i] == 'R') {
        r = 1 - r;
      }
      else {
        if(DQ.empty()) {
          er = true;
          break;
        }
        else {
          if(r) DQ.pop_back(); 
          else DQ.pop_front();
        }
      }
    }

    if(er) {
      cout << "error" << '\n';
    }
    else {
      if(r) reverse(DQ.begin(), DQ.end());
      cout << '[';
      for(int i = 0 ; i < DQ.size(); i++) {
        cout << DQ[i];
        if(i+1 != DQ.size()) cout << ',';
      }
      cout << ']' << '\n';
    }
  }
  return 0;  
}