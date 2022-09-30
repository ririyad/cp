// Problem statement: https://www.codechef.com/SEP221D/problems/BOBBANK

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        int totalDepsit = x * z;
        int bankCharge = y * z;
        int gross = totalDepsit -  bankCharge;
        cout << w + gross << endl;
    }
}
