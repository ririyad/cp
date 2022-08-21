// Problem Link: https://atcoder.jp/contests/abc265/tasks/abc265_a

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