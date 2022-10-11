#include <string>
#include <vector>

using namespace std;

string solution(int n) {
  string res = "";
  for(int i = 1; i <= n ; i++) res += (i % 2 == 0) ? "박" : "수";
  return res;
}