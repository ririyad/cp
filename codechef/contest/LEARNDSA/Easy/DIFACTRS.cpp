// Problem link: https://www.codechef.com/CCSTART2/problems/DIFACTRS

#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    while(cin >> n) {
        int count = 0, temp;
        vector<unsigned long long>v;
        for(int i = n; i > 0; i--) {
            if(n%i == 0) {
                count++;
                temp = n / i;
                v.push_back(temp);
            }
        }
        cout << count << "\n";

        vector<unsigned long long>::iterator it;
        for(it = v.begin(); it != v.end(); it++){
            cout << *it << " ";
        }
        cout << "\n";
    }
}