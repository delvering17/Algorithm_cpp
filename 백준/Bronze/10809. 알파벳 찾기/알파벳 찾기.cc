#include <bits/stdc++.h>
using namespace std;

int arr[26];
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  fill_n(arr, 26, -1);
  string str;
  cin >> str;
  int cnt = 0;
  for(auto c : str) {
    if(arr[c-'a'] == -1) arr[c-'a'] = cnt;
    cnt++;
  };

  for(int i = 0 ; i < 26; i++) cout << arr[i] << ' ';
  return 0;
}