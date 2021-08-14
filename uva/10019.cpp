#include <iostream>
using namespace std;

int countOneFromBin(int &num) {
    int one= 0, temp;
    while(num > 0) {
        temp = num % 2;
        if(temp == 1){one++;}
        num /= 2;
    }
    return one;
}

int countOneFromHex(int &num) {

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int num;
        cin >> num;
        int bin = countOneFromBin(num);
        int hex = countOneFromHex(num);
    }
}