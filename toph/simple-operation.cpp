#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        // assuming a > c
        int a, c, res;
        char b;
        cin >> a >> b >> c;
        switch(b) {
            case '+':
                res = a + c;
                break;
            case '-':
                res = a - c;
                break;
            case '*':
                res = a * c;
                break;
            case '/':
                res = a / c;
        }
        cout << "Case " << i << ": " << res << "\n";
    }
}