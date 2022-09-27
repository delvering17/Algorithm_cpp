#include <bits/stdc++.h>
using namespace std;

int cal(int arr[], int cnt, int time, int price) {
    int pay = 0;

    for(int i = 0 ; i < cnt ; i++) {
        pay += (arr[i] / time + 1) * price ;
    }
    return pay;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt;
    cin >> cnt;

    int arr[cnt];
    for(int i = 0 ; i < cnt ; i++) cin >> arr[i];
    
    int Y = cal(arr, cnt, 30, 10);
    int M = cal(arr, cnt, 60, 15);
    
    if(Y < M) cout << "Y " << Y;
    else if(Y > M) cout << "M " << M;
    else cout << "Y M " << Y;

    return 0;
}