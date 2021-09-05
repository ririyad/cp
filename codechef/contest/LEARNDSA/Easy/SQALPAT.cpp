// Problem link: https://www.codechef.com/CCSTART2/problems/SQALPAT

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while(cin >> n) {
        for(int i = 1; i <= n; i++) {
            if(i % 2 == false) {
                for(int j = 0; j < 5; j++) {
                    cout << i * 5 - j << " ";
                }
                cout << "\n";
            } else {
                for(int k = 4; k >= 0; k--) {
                    cout << i * 5 - k << " ";
                }
                cout << "\n";
            }
        }
    }
}