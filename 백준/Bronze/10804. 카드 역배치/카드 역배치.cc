#include <bits/stdc++.h>
using namespace std;

int arr[21];

void reverse(int start, int end) {
    for(int i = 0 ; i < (end - start + 1) / 2 ; i++) {
        swap(arr[start+i], arr[end-i]);
    }
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 1 ; i <= 20 ; i++) arr[i] = i;

    for(int i = 1 ; i <= 10 ; i++) {
        int start, end; 
        cin >> start >> end;
        reverse(start, end);
    }

    for(int i = 1 ; i <= 20 ; i++) cout << arr[i] << " ";  

    return 0;
}