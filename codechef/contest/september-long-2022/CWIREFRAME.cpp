// Problem link: https://www.codechef.com/SEP221D/problems/CWIREFRAME

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, x;
        cin >> n >> m >> x;
        int area = 2 * n + 2 * m;
        cout << area * x << "\n";
    }
}
