// Online Judge issue

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int &n) {
    bool prime = true;
    int sq = sqrt(n);
    for(int i = 2; i <= sq; i++) {
        if(n % i == 0) {
            prime = false;
            return prime;
        }
    }

    return prime;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while(cin >> n) {
        bool res = isPrime(n);
        if(res) cout << "Yes\n";
        else cout << "No\n";
    }
}