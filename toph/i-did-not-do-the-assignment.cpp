// Problem link: https://toph.co/p/i-did-not-do-the-assignment

#include <iostream>
#include <cmath>
using namespace std;

bool detPrime(int n) {
    bool isPrime = true;
    if(n == 2) return isPrime;
    int sq = sqrt(n);
    for(int i = 2; i <= sq; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main() {
    int n;
    while(cin >> n) {
        bool isPrime = detPrime(n);
        if(!isPrime) {
            for(int i = 0; i < n; i++) {
                cout << "I DID NOT DO THE ASSIGNMENT.\n";
            }
        } else {
            cout << "NO PUNISHMENT\n";
        }
    }
}