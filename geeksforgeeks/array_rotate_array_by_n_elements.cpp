// Problem link: https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0#

#include <iostream>

using namespace std;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while(t--) {
       int n, d;
       cin >> n >> d;
       int arr[n];
       for(int i = 0; i < n; i++) {
           cin >> arr[i];
       }
       int solb[n];
       for(int i = 0; i < n; i++) {
           solb[(i+n-d)%n] = arr[i];
       }

       for(int i = 0; i < n; i++) {
           cout << solb[i] << " ";
       }
       cout << "\n";
   }
}
