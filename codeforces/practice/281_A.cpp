// NOT SOLVED YET
// Problem link: https://codeforces.com/problemset/problem/281/A

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    for(int i = 0; i < 1; i++) {
        toupper(s[i]);
    }

    for(int i = 0; i < s.length(); i++) {
        cout << s[i];
    }

    cout << "\n";
}