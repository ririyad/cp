// Problem link: https://toph.co/p/the-haunted-house

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        int strHalfLength = str.length() / 2;
        for(int i = strHalfLength - 1; i >= 0; i--) {
            cout << str[i];
        }
        cout << "\n";
    }
}