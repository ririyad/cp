// Problem Link: https://cses.fi/problemset/task/1083/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long n;
    while(cin >> n) {
        vector<int>v;
        int temp;
        for(int i = 0; i < n-1; i++) {
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.begin()+(n-1));
        int flag = 1;
        for(int i = 0; i < n; i++) {
            if(flag == v[i]) {
                flag++;
                continue;
            }else {
                cout << flag << "\n";
                break;
            }
        }

    }
}