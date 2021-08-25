#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  while(cin >> n) {
    long res = pow(2, n-1);
    cout << res << endl;
  }
}
