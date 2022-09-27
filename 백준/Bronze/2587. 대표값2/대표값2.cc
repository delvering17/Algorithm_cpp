#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int arr[5];
    for(int i = 0 ; i < 5 ; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 5);
    cout << accumulate(arr, arr + 5, 0) / 5 << "\n" << arr[2];   

    return 0;
}
