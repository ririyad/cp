#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        int res;
        if(n >= 1 && n <= 125) res = 4;
        else if(n >= 126 && n <= 211) res = 6;
        else if(n>= 212 && n <= 214) res = 8;

        cout << res << "\n";
    }

}