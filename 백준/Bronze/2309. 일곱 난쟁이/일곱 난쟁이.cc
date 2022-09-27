#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int arr[9];
    int real[7];

    for(int i = 0 ; i < 9 ; i++) cin >> arr[i];

    for(int i = 0 ; i < 9 ; i++) {
        int sum;
        for(int j = i + 1 ; j < 9 ; j++) {
            sum = 0;

            for(int k = 0, idx = 0 ; k < 9 ; k++) {
                if(k != i && k != j) {
                    real[idx++] = arr[k];
                    sum += arr[k];
                }
            }
            if(sum == 100) break;
        }
        if(sum == 100) break;
    }

    sort(real, real + 7);
    for(int num : real) cout << num << "\n";
    
    return 0;
}