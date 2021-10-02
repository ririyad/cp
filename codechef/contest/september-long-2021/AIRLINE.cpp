#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d, e, t;
    cin >> t;
    while(t--) {
        cin >> a >> b >> c >> d >> e;
        int shortest = a;
        if(shortest > b) shortest = b;
        else if(shortest > c) shortest = c;
        if(shortest > e) 
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}