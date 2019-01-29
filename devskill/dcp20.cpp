#include <iostream>
using namespace std;

int main() {
  int testCase;
  cin >> testCase;
  for(int i = 1; i <= testCase; i++) {
    int cx, cy, px, py;
    double r;
    cin >> cx >> cy >> r >> px >> py;
    int distanceSq = (px - cx)*(px - cx) + (py - cy)*(py - cy);
    double radiusSq = r * r;
    if(distanceSq > radiusSq)
      cout << "Case " << i << ": " << "Outside" << endl;
    else if(distanceSq < radiusSq)
      cout << "Case " << i << ": " << "Inside" << endl;
    else
      cout << "Case " << i << ": " << "OnCircle" << endl;

  }
}
