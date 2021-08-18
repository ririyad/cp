#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        vector<unsigned long long>v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        unsigned long long max = 0;
        for(int i = 0; i < n; i++) {
            if(v[i] > max) {
                max = v[i];
            }
        }

        cout << max << "\n";
    }
}