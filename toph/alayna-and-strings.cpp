// Problem link: https://toph.co/p/alayna-and-strings

#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    while(cin >> str) {
        int cap = 0, small = 0;
        char ch;
        for(int i = 0; i < str.length(); i++) {
            //ch = str[i];
            if((int)str[i] >= 65 && (int)str[i] <= 90){
                cap++;
            }
            else if ((int)str[i] >= 97 && (int)str[i] <= 122) {
                small++;
            }
        }
        cout << cap << " " << small << "\n";
    }
    
}