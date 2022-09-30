#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int x;
        cin >> x;
        int result = x % 25 == 0 ? (x/25) : (x/25)+1;
        cout << result << endl;
    }
}
