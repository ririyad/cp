// NOT SOLVED YET

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, m, x, max;
        cin >> n >> m >> x;
        int numOfQualified = 0;
        int arr[n];
        vector<int>pos(30);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++) pos[i] = 0;
        //sort(arr, arr+n);
        for(int i = 0; i < n; i++) {
            if(arr[i] >= m) {
                numOfQualified++;
                pos[i] = 1;
            }
        }
        cout << "1st qualified: " <<  numOfQualified << endl;

        if(numOfQualified < x) {
            for(int i = n-1; i >= 0; i--) {
                if(pos[i] == 1 || numOfQualified >= x) {
                    cout << "if value: " << arr[i] << endl;
                    continue;
                }
                else {
                   // cout << "else invoked" << endl;
                    cout << "else value: " << arr[i] << " index: " << i << endl;
                    //for(int k = 0; k < )
                    numOfQualified++;
                    pos[i] = 1;
                }
            }
        }
        cout << numOfQualified << " ";
        for(int i = 0; i < n; i++) {
            if(pos[i] == 1) {
                cout << i+1 << " ";
            }
        }
        cout << "\n";
    }
}