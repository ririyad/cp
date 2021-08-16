// Problem link: https://toph.co/p/little-subarray-sum

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    while(cin >> n >> a >> b) {
    int arr[n];
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = a; i <= b; i++) {
        sum += arr[i];
    }

    cout << sum << "\n";

  }

}