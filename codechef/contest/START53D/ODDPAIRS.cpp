#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        if(n % 2 == 0) cout << (n/2) * n << endl;
        else cout << (n/2) * n + (n/2) << endl;
    }
}
