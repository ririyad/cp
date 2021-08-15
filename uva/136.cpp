// NOT SOLVED YET

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int count = 1;
    for(int i = 2; ; i++) {
        if(i%2 == 0 || i%3 == 0 || i%5 == 0){
            count++;   
        }
        if(count >= 11) {
            cout << i << "\n";
            break;
        }
    }
}