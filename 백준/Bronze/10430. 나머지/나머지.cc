#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << (a + b) % c << " ";
    cout << ((a % c) + (b % c)) % c << " ";
    cout << (a * b) % c << " ";
    cout << ((a % c) * (b % c)) % c << " ";

    return 0;
}