#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

  int cnt;
  cin >> cnt;

  for(int i = 0; i < cnt - 1; i++) {
    for(int j = 0; j < i; j++) cout << ' ';
    for(int j = 0; j < 2 * (cnt - i) - 1; j++) cout << '*';
    cout << "\n";
  }

  for(int j = 0; j < cnt - 1; j++) cout << ' ';
  cout << "*\n";

  for(int i = 1; i <= cnt - 1; i++) {
    for(int j = 1; j <= cnt - i - 1; j++) cout << ' ';
    for(int j = 1; j <= 2 * i + 1; j++) cout << '*';
    cout << "\n";
  }

    return 0;
}