#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[9];
    int sum = 0;

    for(int i = 0 ; i < 9 ; i++) cin >> arr[i], sum += arr[i];

    for(int i = 0 ; i < 9 ; i++) {
        for(int j = i + 1 ; j < 9 ; j++) {
            if(sum - arr[i] - arr[j] == 100) {
                arr[i] = arr[j] = 0;
                i = j = 9;
            }
        }
    }
    sort(arr, arr + 9);
    for(int i = 2 ; i < 9 ; i++) cout << arr[i] << "\n";
    
    return 0;
}
