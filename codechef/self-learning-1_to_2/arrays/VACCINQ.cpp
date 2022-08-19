// Problem Link: https://www.codechef.com/submit/VACCINQ

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n, p, x, y, pos;
        int sum = 0;
        vector<int>v;
        cin >> n >> p >> x >> y;
        for(int i = 0; i < n; i++){
            cin >> pos;
            v.push_back(pos);
        }
        for(int j =  0; j < p; j++) {
            if(v[j] == 0) sum += x;
            if(v[j] == 1) sum += y;
        }

        cout << sum << endl;
    }
}