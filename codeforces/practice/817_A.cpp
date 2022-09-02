#include <iostream>
#include <string>
#include <algorithm>
#define forn(i, n) for(int i = 0; i < n; i++)

using namespace std;

int main() {
    string name = "Timur";
    sort(name.begin(), name.end());
    int t;
    cin >> t;
    while(t--) {
        int len;
        cin >> len;
        string str;
        cin >> str;

        sort(str.begin(), str.end());
        cout << (name == str ? "YES" : "NO") << endl;
    }
}
