#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt;
    cin >> cnt;

    for(int i = cnt ; i > 0 ; i--) {
        for(int j = i ; j < cnt ; j++) cout << ' ';
        for(int k = 0 ; k < (2*i-1) ; k++) cout << "*";
        cout << "\n"; 
    }

    return 0;
}