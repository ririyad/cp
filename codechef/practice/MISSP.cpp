// Problem Link: https://www.codechef.com/submit/MISSP

// Not Solved

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long n, res = 0;
        cin >> n;
        while(n--) {
            long num;
            cin >> num;
            if(num % 2) res++;
        }
        cout << res << endl;
    }
}