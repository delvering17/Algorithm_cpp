#include <bits/stdc++.h>
using namespace std;

void traverse(list<char>& L) {
  for(auto c : L) cout << c;
  cout << "\n";
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int time;
  cin >> time;

   while(time--) {
    list<char> L;
    auto cursor = L.begin();  
    string str;
    cin >> str;

    for(auto c : str) {
      switch(c) {
        case '<':
          if(cursor != L.begin()) cursor--;
          break;
        case '>':
          if(cursor != L.end()) cursor++;
          break;
        case '-':
          if(cursor != L.begin()) {
            cursor--;
            cursor = L.erase(cursor);
          }
          break;
        default:
          L.insert(cursor, c);
          break;
      }    
    }
    traverse(L);
   }
  

  return 0;
}