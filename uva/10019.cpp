#include <iostream>
#include <cmath>
using namespace std;

int countOneFromBin(int num) {
    int one= 0, temp;
    while(num > 0) {
        temp = num % 2;
        if(temp == 1){one++;}
        num /= 2;
    }
    return one;
}

int countFromHex(int num) {
    int sixpow = 0, res = 0;
    int mod;
    while(num > 0) {
        mod = num % 10;
        res = res + mod * pow(16, sixpow);
        sixpow++;
        num /= 10;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int num;
        cin >> num;
        int bin1 = countOneFromBin(num);
        int hextoDec = countFromHex(num);
        int bin2 = countOneFromBin(hextoDec);

        cout << bin1 << " " <<  bin2 << "\n";
    }
}