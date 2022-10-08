#include <bits/stdc++.h>
using namespace std;

const int MX = 600001;
char dat[MX];
int pre[MX];
int nxt[MX];
int unused = 1;
int cursor;

void insert(int addr, char c) {
  dat[unused] = c;
  pre[unused] = addr;
  nxt[unused] = nxt[addr];
  if(nxt[addr] != -1) pre[nxt[addr]] = unused; 
  nxt[addr] = unused;
  cursor = unused;
  unused++;
}

void remove(int addr) {
  nxt[pre[addr]] = nxt[addr];
  if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
  cursor = pre[addr];
}

void traverse() {
  int cur = nxt[0];
  while(cur != -1) {
    cout << dat[cur];
    cur = nxt[cur];
  }
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);
  fill(pre, pre+MX, -1);
  fill(nxt, nxt+MX, -1);

  string str;
  cin >> str;
  for(auto c : str) insert(unused-1, c);
  cursor = unused-1;

  int time;
  cin >> time;
  
  for(int i = 0 ; i < time ; i++) {
    char c;
    cin >> c;
    switch(c){
      case 'L':
        if(pre[cursor] != -1) cursor = pre[cursor];
        break;
      case 'D':
        if(nxt[cursor] != -1) cursor = nxt[cursor];
        break;
      case 'B':
        if(pre[cursor] != -1) remove(cursor);
        break;  
      case 'P':
        char h;
        cin >> h;
        insert(cursor, h);
        break;
    }

  }

  traverse();

  return 0;
}