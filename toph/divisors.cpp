// Problem Link: https://toph.co/p/divisors
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    while(cin >> a) {
        for(int i = 1; i <= a; i++) {
            if(a % i == 0) {
                cout << i << "\n";
            }
        }
    }
}