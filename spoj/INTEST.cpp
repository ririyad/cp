// Problem link: https://www.spoj.com/problems/INTEST/
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, div;
    cin >> n >> k;
    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> div;
        if(div % k == 0) {
            count++;
        }
    }
    cout << count << "\n";


    return 0;
}