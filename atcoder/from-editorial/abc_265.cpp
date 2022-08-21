#include <iostream>
using namespace std;

int main() {

    int x, y, n;
    while(cin >> x >> y >> n) {
        int res;
        if(x * y > 3) {
            res = (n / 3) * y + (n % 3) * x;
        } else {
            res = x * n; 
        }
        cout << res << endl;
    }
}