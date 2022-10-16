#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[2*MX+1];
int head = MX, tail = MX;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int N;
  cin >> N;
  while(N--) {
    string str;
    cin >> str;
    if(str == "push_front") {
      int num;
      cin >> num;
      dat[--head] = num;
    }
    else if(str == "push_back") {
      int num;
      cin >> num;
      dat[tail++] = num;
    }
    else if(str == "pop_front") {
      if(head == tail) {
        cout << -1 << '\n';
      }
      else {
        cout << dat[head++] << '\n'; 
      }
    }
    else if(str == "pop_back") {
      if(head == tail) {
        cout << -1 << '\n';
      }
      else {
        cout << dat[--tail] << '\n';
      }
    }
    else if(str == "size") {
      cout << tail - head << '\n';
    }
    else if(str == "empty") {
      cout << (int)(tail-head == 0) << '\n';
    }
    else if(str == "front") {
      if(head == tail) {
        cout << -1 << '\n';
      }
      else {
        cout << dat[head] << '\n';
      }
    }
    else {
      if(head == tail) {
        cout << -1 << '\n';
      }
      else {
        cout << dat[tail-1] << '\n';
      }
    }
  }


}
