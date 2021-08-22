 // Solved after contest, go WA for precision issue

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    while(cin >> n) {
        long double res = floor(log2((long double)n));
        cout << res << "\n";
    }
}