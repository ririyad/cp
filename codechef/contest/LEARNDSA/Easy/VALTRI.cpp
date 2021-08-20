// Problem link: https://www.codechef.com/CCSTART2/problems/VALTRI
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while(cin >> n) {
        if(n % 5 == 0 || n % 6 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}