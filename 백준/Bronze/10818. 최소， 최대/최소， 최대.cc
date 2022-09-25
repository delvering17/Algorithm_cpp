#include <iostream>
using namespace std;

int main(void){
  int N;
  
  int max;
  int min;
  cin >> N >> max;
  min = max;
  for(int i = 1 ; i < N ; i++) {
    int num;
    cin >> num;
    if(num > max) {
      max = num;
    }
    if(num < min) {
      min = num;
    }
  }
  cout << min << " " << max;
  return 0;
}