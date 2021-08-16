#include <iostream>
using namespace std;

int decToBin(int n) {
    int temp, count = 0;
    while(n > 0) {
        temp = n % 2;
        n = n / 2;
        if(temp == 1) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    while(cin >> n) {
        int nuOfOneBit = decToBin(n);
        int similar;
        for(int i = 0; i <= n; i++) {
            similar = decToBin(i);
            if(similar != nuOfOneBit) {
                continue;
            }
            else {
                cout << i << "\n";
                break;
            }
        }
    }
}