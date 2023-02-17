<<<<<<< HEAD:atcoder/abc_212_a.cpp
// Solved
=======
// Problem Link: https://atcoder.jp/contests/abc265/tasks/abc265_a

>>>>>>> 6e18c1b6742ab7700eb9a64468d06547445722d2:atcoder/practice/abc_212_a.cpp
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    while(cin >> a >> b) {
        if(a == 0 && b != 0) cout << "Silver\n";
        else if(b == 0 && a != 0) cout << "Gold\n";
        else cout << "Alloy\n";
    }
}