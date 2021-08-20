// Problem link: https://www.codechef.com/CCSTART2/problems/REVMEE

#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    while(cin >> n) {
        vector<int>v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        for(int i = n-1; i >= 0; i--) {
            cout << v[i] << " "; 
        }
        cout << "\n";
    }
}