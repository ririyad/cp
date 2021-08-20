// Problem link: https://www.codechef.com/CCSTART2/problems/TRIVALCH

#include <iostream>
using namespace std;

int main() {
    int tr[3], max = 0, s = 0;
        for(int i = 0; i < 3; i++) {
            cin >> tr[i];
            s += tr[i];
            if(tr[i] > max) {
                max = tr[i];
            }
        }
        s = s/2;
        if(s < max)
            cout << "NO\n";
        else
            cout << "YES\n";
}