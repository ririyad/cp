#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        if(x == w ||
            y == w ||
            z == w ||
            x + y == w ||
            y + z == w ||
            z +x == w ||
            x + y + z == w) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
    }
}
