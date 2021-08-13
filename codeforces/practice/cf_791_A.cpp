#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, b;
    while(cin >> l >> b) {
        int year = 0;
        while(l <= b) {
            l =  l* 3;
            b = b * 2;
            year++;
        }
        cout << year << "\n";
    }
}