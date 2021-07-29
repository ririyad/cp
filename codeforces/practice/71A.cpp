//Problem Link: https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>

using namespace std;

int main() {

   int T;
   cin >> T;
   while(T--) {
   string s;
   cin >> s;
  
   if(s.length() > 10) {
      int midlength = s.length() - 2;
      cout << s.at(0) << midlength << s.at(s.length()-1) << endl;
   }
   else
      cout << s << endl;
   }

}

