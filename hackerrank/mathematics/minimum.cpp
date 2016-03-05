#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
  int t, num;
  while(scanf("%d", &t)==1){
    while(t--){
        scanf("%d", &num);
        printf("%d\n", num+1);
    }
  }

  return 0;
}
