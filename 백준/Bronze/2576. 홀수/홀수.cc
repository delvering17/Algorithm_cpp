#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int sum, min, num;

    sum = 0;
    min = 100;
    for(int i = 0 ; i < 7 ; i++) {
        cin >> num;
        if(num % 2 !=  0) {
            sum += num;
            if(num < min) min = num;
        }
    }   

    (sum == 0) ? cout << -1 : cout << sum << "\n" << min;

    return 0;
}