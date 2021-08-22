// Problem link: https://www.codechef.com/CCSTART2/problems/ADDNATRL

// Getting WA

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned long long n;
    while(cin >> n) {
        unsigned long long sum = 0;
        for(unsigned long long i = 1; i <= n; i++) {
            sum += i;
        }
        cout << sum << "\n";
    }
}