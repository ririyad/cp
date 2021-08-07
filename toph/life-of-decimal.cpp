// Problem Link: https://toph.co/p/life-of-decimals

#include <iostream>

using namespace std;

int main() {
    int pieDecValue[] = {1,4,1,5,9,2,6,5,3,5,8,9};
    int t;
    cin >> t;
    while(t--) {
        int inp;
        cin >> inp;

        cout << pieDecValue[inp-1] << "\n";
    }
}