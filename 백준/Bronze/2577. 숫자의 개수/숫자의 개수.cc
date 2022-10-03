#include <bits/stdc++.h>
using namespace std;

int arr[10];
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int A, B, C;
  cin >> A >> B >> C;
  string num = to_string(A * B * C);
  for(auto c : num) arr[c-'0']++;
  for(auto c : arr) cout << c << "\n";
  return 0;
}