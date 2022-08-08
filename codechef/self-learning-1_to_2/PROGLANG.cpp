#include <iostream>
using namespace std;

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, a1, b1, a2, b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;
        if(a > b) {swap(&a, &b);}
        if(a1> b1) {swap(&a1, &b1);}
        if(a2 > b2) {swap(&a2, &b2);}

        if(a == a1 && b == b1) cout << "1\n";
        else if(a == a2 && b == b2) cout << "2\n";
        else cout << "0\n";
    }
}