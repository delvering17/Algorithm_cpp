#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt;
    cin >> cnt;

    for(int i = cnt-1 ; i > 0 ; i--) {
        for(int j = i ; j < cnt ; j++) cout << "*";
        for(int k = 0 ; k < (2*i) ; k++) cout << ' ';
        for(int j = i ; j < cnt ; j++) cout << "*";
        cout << "\n";
    }
    for(int i = cnt ; i > 0 ; i--) {
        for(int j = 0 ; j < i ; j++) cout << "*";
        for(int k = 0 ; k < 2*(cnt-i) ; k++) cout << ' ';
        for(int j = 0 ; j < i ; j++) cout << "*";
        cout << "\n";
    }

    return 0;
}
