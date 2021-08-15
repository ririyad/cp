#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        vector<int>v(10);
        for(int i = 0; i < 10; i++) {
            cin >> v[i];
        }
        int team1 = v[0] + v[2] + v[4] + v[6] + v[8];
        int team2 = v[1] + v[3] + v[5] + v[7] + v[9];

        if(team1 == team2) cout << "0" << "\n";
        else if(team1 > team2) cout << "1" << "\n";
        else cout << "2" << '\n';
    }
}