#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, x, b, y;
        cin >> a >> x >> b >> y;
        int alice = a / x;
        int bob = b / y;
        if(alice == bob) cout << "Equal\n";
        else if(alice > bob) cout << "Alice\n";
        else cout << "Bob\n";
    }
}