#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    if(s == "Hello,World!")
        cout << "AC\n";
    else 
        cout << "WA\n";
}