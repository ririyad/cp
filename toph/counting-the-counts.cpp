#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        vector<int>v(n);
        int count = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for(int i = 0; i < n; i++) {
            if(v[i] >= 80) {count++;}
        }

        cout << count << "\n" ;
    }
}