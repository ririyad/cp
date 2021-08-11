// NOT SOLVED YET
// Problem link: https://cses.fi/problemset/task/1069


#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s1;

    getline(cin, s1);
    sort(s1.begin(), s1.end());
    int a = 0;
    int c = 0;
    int g = 0;
    int t = 0;
    for(int i = 0; i < s1.length(); i++) {
        if(s1[i] == 'A') a++;
        else if(s1[i] == 'C') c++;
        else if(s1[i] =='G') g++;
        else t++;
    }
    int arr[4] = {a, c, g, t};
    int res = *max_element(arr, arr + 4);
    
    cout << res << "\n";

}