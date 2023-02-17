// Problem Link: https://codeforces.com/problemset/problem/200/B

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int t, num;
    cin >> t;
    double sum = 0;
    for(int i = 0 ; i < t; i++) {
        cin >> num;
        sum += num;
    }

    cout << setprecision(12) << sum / t << endl;

}