// Problem link: https://www.codechef.com/CCSTART2/problems/SECLAR
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[3];
    int max = 0;
    for(int i = 0; i < 3; i++) {
        cin >> arr[i];
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    sort(arr, arr + 3);
    cout << arr[1] << "\n";
}