#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;

    if(a == b) {
        // 같은 눈 3개
        if(b == c) cout << (10000 + a * 1000);
        // 같은 눈 2개 a == b 
        else cout << (1000 + a * 100);

    } 
    // 같은 눈 2개 b == c
    else if(b == c) {
        cout << (1000 + b * 100);
    }
    // 같은 눈 2개 a == c
    else if(a == c) {
        cout << (1000 + a * 100);
    }
    // 모두 다른 눈
    else {
        cout << max({a, b, c}) * 100;
    }

    return 0;
}