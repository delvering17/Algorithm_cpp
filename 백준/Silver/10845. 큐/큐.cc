#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

void push(int x){
  dat[tail++] = x; 
}

void pop(){
  head++;
}

int front(){
  return dat[head];
}

int back(){
  return dat[tail-1];
}

int size() {
  return tail - head;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin >>N;

  while(N--) {
    string str;
    cin >> str;
    if(str == "push") {
      int n;
      cin >> n;
      push(n);
    }
    else if(str == "pop") {
      if(size()) {
        cout << front() << '\n';
        pop();
      }
      else cout << -1 << '\n';
    }
    else if(str == "size") cout << size() << '\n';
    else if(str == "empty") cout << (size() ? 0 : 1) << '\n';
    else if(str == "front") {
      if(size()) cout << front() << '\n';
      else cout << -1 << '\n'; 
    }
    else {
      if(size()) cout << back() << '\n';
      else cout << -1 << '\n'; 
    } 
  }
}