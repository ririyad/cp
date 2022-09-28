#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // number of rows
    for(int i = 0; i < n; i++) {
        for(int k = n-2; k >= i; k--) {cout << " ";}
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}
