// Problem Link: https://toph.co/p/arithmetic-sequence-easy
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while(cin >> n) {
        int sum = (n * (n+1)/2);
        int m, temp;
        cin >> m;
        for(int i = 0; i < m; i++) {
            cin >> temp;
            sum  = sum - temp;
        }
        cout << sum << "\n";
    }
    
}