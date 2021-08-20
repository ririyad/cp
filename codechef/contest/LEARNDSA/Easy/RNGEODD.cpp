// Problem link: https://www.codechef.com/CCSTART2/problems/RNGEODD
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int l, r;
    while(cin  >> l >> r) {
        for(int i = l; i <= r; i++) {
            if(i % 2 != 0)
                cout << i << " ";
        }
        cout << "\n";
    }
}