// Problem link: https://www.codechef.com/CCSTART2/problems/REVSTRPT

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while(cin >> n) {
        for(int row = n; row > 0; row--) {
            for(int col = 1; col <= n; col++) {
                if(col >= row) cout << "*";
                else cout << " ";
            }
            cout << "\n";
        }
    }
}