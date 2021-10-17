#include <iostream>
#include <algorithm>

using namespace std;

int winner(int selected, int oth1, int oth2) {
    return max(0, max(oth1, oth2) + 1 - selected);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << winner(a, b, c) << " " << winner(b, a, c) << " " << winner(c, a, b) << "\n";
        }
}