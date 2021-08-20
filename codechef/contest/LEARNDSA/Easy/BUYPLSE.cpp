// Problem link: https://www.codechef.com/CCSTART2/problems/BUYPLSE
]
#include <iostream>
using namespace std;

int main() {
    int a, b, x, y;
    while(cin >> a >> b >> x >> y) {
        cout << (a*x) + (b*y) << endl;
    }
}