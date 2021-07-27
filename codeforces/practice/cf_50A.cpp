// Problem link: https://codeforces.com/problemset/problem/50/A

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int m, n;
    while(cin >> m >> n) {
        cout << (m*n)/2 << "\n";
    }
}