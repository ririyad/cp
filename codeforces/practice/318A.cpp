// Priblem Link: https://codeforces.com/problemset/problem/318/A

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    long long n, k, det;
    while(cin >> n >> k) {
        det = ceil(n/2.0);
        if(k <= det) 
            cout << (2*k) - 1 << "\n";
        else
            cout << 2*(k-det) << "\n";
    }
}