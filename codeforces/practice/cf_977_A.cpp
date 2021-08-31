// Problem link: https://codeforces.com/problemset/problem/977/A

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    while(cin >> n >> k) {
        int rem;
        for(int i = 0; i < k; i++) {
            rem = n % 10;
            if(rem != 0) n--;
            else n /= 10;
        }
        cout << n << "\n";
    }
}