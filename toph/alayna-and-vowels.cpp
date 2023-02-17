// Problem link: https://toph.co/p/alayna-and-vowels
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int count = 0;
    getline(cin, str);
    for(int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
    for(int i = 0; i < str.length(); i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }
    cout << count << "\n";
}
