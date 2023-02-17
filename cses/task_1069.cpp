// Problem link: https://cses.fi/problemset/task/1069


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    while(cin >> str) {
        int occ = 0;
        int max_count = 1;
        for(int i = 1; i < str.size(); i++) {
            if(str[i-1] == str[i]){
                occ += 1;
                if(occ+1 > max_count) 
                    max_count = occ + 1;
            } else {
                occ = 0;
            }
        }
        cout << max_count << endl;
    }
}