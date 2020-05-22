#include <vector>

using namespace std;

int main() {
   int T, n;
   cin >> T;

   while(T--) {
      int temp, sum = 0;
      vector<int>v;
      cin >> n;
      for(int i = 0; i < n - 1; i++){
         cin >> temp;
         v.push_back(temp);
      }

      for(auto x : v) {
          sum += x;
         }
      int firstN = (n * (n+1)) / 2;
      cout << firstN - sum << endl;
   }
}
