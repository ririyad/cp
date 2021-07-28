#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[5][5], posi, posj;

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 1) {
                posi = i+1;
                posj = j+1;
               // cout << "(i, j)" << posi << " "<< posj << "\n";
                break;
            }
        }
    }
    // as (3,3) is the middle position, we need to determine how
    // many rows and columns we need to forward/backward to go to 
    // that position
    int res = abs(3-posi) + abs(3-posj);
    cout << res << "\n";

}