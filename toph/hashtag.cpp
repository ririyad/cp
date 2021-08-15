#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    getline(cin, str);
    for(int i = 0; str[i]; i++) {
        if(str[i] == ' ') continue;
        cout << str[i];
    }
    cout << "\n";
}

