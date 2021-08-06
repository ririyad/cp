// Problem link: https://www.codechef.com/AUG21C/problems/OLYRANK

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int g1, s1, b1, g2, s2, b2;
        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
        int m1 = g1 + s1 + b1;
        int m2 = g2 + s2 + b2;
        if(m1 > m2) 
            cout << 1 << "\n";
        else 
            cout << 2 << "\n";
    }
}