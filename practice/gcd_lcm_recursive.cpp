#include <cstdio>

using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

int main()
{
  int a, b; //a>b
  while(scanf("%d %d", &a, &b)==2){
  printf("gcd is: %d\n", gcd(a, b));
  printf("lcm is: %d\n", (a*b)/gcd(a,b));
  }

  return 0;
}
