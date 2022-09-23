#include <iostream>
using namespace std;
int main(){
    int right_set[6] = {1, 1, 2, 2, 2, 8}; 
    int input_set[6];
    for(int i = 0 ; i < 6 ; i++) {
        cin >> input_set[i];
    }
    for(int i = 0 ; i < 6 ; i++) {
        cout << right_set[i] - input_set[i] << " ";
    }

    return 0;
}