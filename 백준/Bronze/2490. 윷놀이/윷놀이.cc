#include <bits/stdc++.h>
using namespace std;

void chk(int cnt) {
    if(cnt == 1) cout << 'A';
    else if(cnt == 2) cout << 'B';
    else if(cnt == 3) cout << 'C';
    else if(cnt == 4) cout << 'D';
    else cout << 'E';
    cout << "\n";
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0 ; i < 3 ; i++) {
        int cnt = 0; 
        for(int j = 0 ; j < 4 ; j++) {
            int num;    
            cin >> num;
            if(num == 0) cnt++;
        }
        chk(cnt);
    }

    return 0;
}
