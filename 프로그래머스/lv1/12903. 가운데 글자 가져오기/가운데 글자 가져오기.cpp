#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    int len = s.length();
    len % 2 == 0 ? answer = s.substr(len/2-1,2) : answer = s[len/2];
    return answer;
}