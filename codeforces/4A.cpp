//Problem Link: https://codeforces.com/problemset/problem/4/A
#include <iostream>

using namespace std;

int main() {

   int w;
   while(cin >> w){
      if(w == 2 || w % 2 != 0)
         cout << "NO" << endl;
      else
         cout << "YES" << endl;
   }
}
