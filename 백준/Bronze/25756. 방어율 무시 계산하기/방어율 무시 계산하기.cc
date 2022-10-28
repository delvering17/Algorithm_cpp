#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    double V = 0.0;
    cin >> N;
    cout << setprecision(10);
    while(N--) {
        int a;
        cin >> a;
        double res = (1- (1 - (V / 100.0)) * (1 - (double)(a / 100.0)))*100.0;
        cout << res << '\n';
        V = res;
    }
    return 0;
}
