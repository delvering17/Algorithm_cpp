#include <iostream>
using namespace std;

int main(){
   int num;
   cin >> num;
   int origin = num;
   int cnt = 0;
   while(true) {
      int ten = num / 10;
      int one = num % 10;
      num = (one * 10) + ((ten + one) % 10);
      cnt ++;

      if(origin == num) {
         cout << cnt;
         break;
      }

   }

   return 0;
}