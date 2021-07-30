// Problem statement: https://codeforces.com/contest/1554/problem/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0; i< n; i++) {
            cin >> v[i];
        }
        long long ans = 0;
        for(int i = 1; i < n; i++) {
            ans = max(ans, 1ll * v[i] * v[i-1]);
        }
        cout << ans << "\n";

    }
    
}