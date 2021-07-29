// not yet accepted
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  //freopen("in.txt", "r", stdin);
  long long n;
  while(cin>> n){
     long long arr[n+5];
     for(long long i = 0; i<n; i++)
        cin >> arr[i];
     for(long long i = 0; i< n; i++){
       long long divisior = 0;
       for(long long j = 1; j*j <= arr[i]; j++){
         if(j*j == arr[i])
            divisior+=1;
          else if(arr[i]%j==0)
            divisior+=2;
       }
       if(divisior == 3) cout << "YES\n";
       else cout << "NO\n";
     }
  }

   return 0;
}
