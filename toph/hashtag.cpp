#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    getline(cin, str);
    int count = 0;
    for(int i = 0; str[i]; i++) {
        
        if(str[i] != ' ') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
    cout << str << "\n";
}