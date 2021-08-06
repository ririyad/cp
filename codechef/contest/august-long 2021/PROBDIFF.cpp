
// Problem not solved yet

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int res = 0;
        int arr[4];
        for(int i = 0; i < 4; i++) {
            if(arr[i] >= 1 && arr[i] <= 10) {
                cin >> arr[i];
            }
        }
        sort(arr, arr+4);
        if(arr[0] != arr[1])
            res++;
        if(arr[2] != arr[3])
            res++;

        cout << res << "\n";
    }
}