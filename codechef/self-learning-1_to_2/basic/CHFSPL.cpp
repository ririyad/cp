#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a > b) swap(&a, &b);
        if(b > c) swap(&b, &c);
        if(a > b) swap(&a, &b);

        cout << b + c << endl;
    }
}