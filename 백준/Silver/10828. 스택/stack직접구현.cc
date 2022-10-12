#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos;

void push(int X) {
  dat[pos++] = X;
}

int pop() {
  if(pos == 0) return -1;
  else return dat[--pos];
}

int size() {
  return pos;
}

int empty() {
  if(pos == 0) return 1;
  else return 0;
}

int top() {
  if(pos == 0) return -1;
  else return dat[pos-1];
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int N;
  cin >> N;

  while(N--) {
    string str;
    cin >> str;
    if(str == "push") {
      int num;
      cin >> num;
      push(num);
    }
    else if(str == "pop") {
      cout << pop() << "\n";
    }
    else if(str == "size") {
      cout << size() << "\n";
    }
    else if(str == "empty") {
      cout << empty() << "\n";
    }
    else {
      cout << top() << "\n";
    }
  }
}
