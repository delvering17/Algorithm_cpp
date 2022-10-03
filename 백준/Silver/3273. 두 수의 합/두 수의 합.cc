#include <bits/stdc++.h>
using namespace std;

int arr[2000001];
int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n ;
  cin >> n;
  for(int i = 0 ; i < n ; i++) {
    int num;
    cin >> num;
    arr[num]++;
  }
  int x;
  cin >> x;

  int res = 0;
  for(int i = 1 ; i < x ; i++) {
    if(arr[i]*2 != x) {
      if(arr[i] == 1 && arr[x-i] == 1) res++;
    }
  }
  
  cout << res/2;
  return 0;
}