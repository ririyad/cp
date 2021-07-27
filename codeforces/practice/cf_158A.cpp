// Problem statetment: https://codeforces.com/problemset/problem/158/A

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+n, greater<int>());

    int p = arr[k-1];
    int ql = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i]!= 0 && arr[i] >= p) {
                ql++;
            }
        }
        cout << ql << "\n";

}