// Problem link: https://www.codechef.com/CCSTART2/problems/ANGTRICH
// getting WA; need to find out


#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    while(cin >> a >> b >> c) {
        int sum = a + b + c;
        if(sum >= 180) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}