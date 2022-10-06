#include <bits/stdc++.h>
using namespace std;

int arr[2000001];
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin >> N;
  string num;
  cin >> num;

  int sum = 0;
  for(auto c : num) sum += c - '0';
  
  cout << sum;

  return 0;
}