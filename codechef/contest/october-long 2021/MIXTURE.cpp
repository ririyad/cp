
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int ts;
    cin >> ts;
    while(ts--) {
        int a, b;
        cin >> a >> b;
        if(a != 0 && b !=0) cout << "Solution\n";
        else if (a == 0) cout << "Liquid\n";
        else cout << "Solid\n";
    }
}