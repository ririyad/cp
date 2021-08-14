#include <iostream>
using namespace std;


// Will give WA, unable to find O(1) solution.
int main() {
    int S, T;
    while(cin >> S >> T) {
        int count = 0;
        for(int i = 0; i <= 100 ; i++) {
            for(int j = 0; j <= i ;j++) {
                for(int k = 0; k <= j ; k++){
                    if((i + j + k) <= S && (i*j*k)<= T) {count++;}
                    else {
                        break;
                    }
                }
            }
        }
        cout << count << "\n";
    }
}