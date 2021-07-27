// Problem link: https://codeforces.com/problemset/problem/282/A
#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int res = 0;
    string str;
    for(int i = 0; i < n; i++) {
        cin >> str;
        if(str[1] == '+') {res++;}
        else {res--;}
    }
    cout << res << "\n";
}