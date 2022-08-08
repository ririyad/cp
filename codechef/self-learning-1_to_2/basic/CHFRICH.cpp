// Problem link: https://www.codechef.com/submit/CHFRICH

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, x;
        cin >> a >> b >> x;
        cout << (b-a)/x << endl;
    }
}