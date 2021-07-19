// Problem link: https://practice.geeksforgeeks.org/problems/reverse-squared-sum/0/#

#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end) {
    while(start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        reverseArray(arr, 0, n-1);
        int sum = arr[0] * arr[0];
        for(int i = 1; i < n; i++) {
            if(i % 2 == 0) {
                sum += arr[i] * arr[i];
            }
            else {
                sum -= arr[i] * arr[i];
            }
        }
        cout << sum << "\n";
    }
}

// we could use a single function to do the reverserSumSquare task instead of writing two function. In  that
// case, just loop through n-1 to 0 and keep a boolean flag which will be updated every iteration.