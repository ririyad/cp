// Problem link: https://cses.fi/problemset/result/2661147/

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long n;
    while(cin >> n) {
        cout << n << " ";
        while(n != 1) {
            if(n % 2 == 0) {
                n = n / 2;
                cout << n << " ";
            }
            else {
                n = n * 3 + 1;
                cout << n << " ";
            }
        }
        cout << "\n";
    }
}