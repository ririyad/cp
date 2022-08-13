// Problem link: https://codeforces.com/problemset/problem/486/A

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long f;
    while(cin >> f) {
        if(f % 2 == 0) 
            cout << f/2 << endl;
        else
            cout << -(f+1)/2 << endl;
    }
}