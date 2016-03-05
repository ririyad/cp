#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
  int t;
  while(scanf("%d", &t)==1){
    int px, py, qx, qy, p, q;
    while(t--){
        scanf("%d %d %d %d", &px, &py, &qx,&qy);
        p = 2*(qx) - px;
        q = 2*(qy) - py;

        printf("%d %d\n", p, q);
    }
  }

  return 0;
}
