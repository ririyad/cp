#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int row, column;
        cin >> row >> column;
        cout << "Case " << i << ": "<< "\n";
        for(int i  = 0; i < row; i++) {
            for(int j = 0; j < column; j++) {
                cout << "*";
            }
            cout << "\n";
        }
    }
}