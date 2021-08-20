// Problem link: https://www.codechef.com/CCSTART2/problems/FINDMELI

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    while(cin >> n >> x) {
        vector<int>v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        bool exist = find(begin(v), end(v), x) != end(v);
        if(exist) cout << "1" << "\n";
        else cout << "-1" << "\n";
    }
}