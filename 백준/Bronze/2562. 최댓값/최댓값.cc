#include <iostream>
using namespace std;

int main(void){
  int max;
  int idx = 1;
  cin >> max;
  for(int i = 2; i < 10 ; i++) {
    int num;
    cin >> num;
    if(num > max) {
      max = num;
      idx = i;
    }
  }
  cout << max << "\n" << idx;
  return 0;
}