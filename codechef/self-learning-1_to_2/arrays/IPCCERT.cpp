#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    int part = 0;
    cin >> n >> m >> k;
    while(n--) {
        int tq, q;
        int sum = 0;
        for(int i = 0; i < k; i++) {
            cin >> tq;
            sum += tq; 
        }
        cin >> q;
        if(sum >= m && q <= 10) {part++;}
    }
    cout << part << endl;
}