#include <iostream>

using namespace std;

bool bs(int key, int arr[], int n)
{
   int lo = 0, hi = n-1;
   while(lo <= hi){
     int mid = (lo+hi)/2;
     if(arr[mid] == key) return true;
     else if(arr[mid]> key) hi = mid - 1;
     else if(arr[mid] < key) lo = mid + 1;
   }
   return false;
}

int main()
{
  int n, q, key;
  cin >> n;
  int arr[n+5];
  for(int i = 0; i< n; i++)
    cin >> arr[i];

  cin >> q;
  while(q--){
    cin >> key;
  bool res = bs(key, arr, n);
  if(res) cout << "Key Found!" << endl;
  else cout << "Key not Found" << endl;
}

   return 0;
}
