// Problem Link: https://codeforces.com/contest/1729/problem/A

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 1) cout << "1" << endl;
        else{
            int x = a - 1;
            int y = (c > b) ? ((c-b) + (c-1)) : (b-1);
            if(x < y) cout << "1" << endl; 
            else if(y < x) cout << "2" << endl;
            else {
                cout << "3" << endl;
            }
        }
    }
}