// Problem link: https://codeforces.com/problemset/problem/546/A

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, w;
    while(cin >> k >> n >> w) {
        int bp = 0;
        int br = 0;
        for(int i = 1; i <= w; i++) {
            bp += i * k;
        }
        if(bp > n) br = bp - n;

        cout << br << "\n"; 

    }
}