// Problem Link: https://www.spoj.com/problems/STRHH/

#include <iostream>
using namespace std;

int main() {
    int inp;
    cin >> inp;
    while(inp--) {
        string str;
        cin >> str;
        string res = "";
        int size = str.size() / 2;
        for(int i = 0; i < size; i++) {
            if(i % 2 == 0) res += str[i];
        }

        cout << res << endl;
    }
}