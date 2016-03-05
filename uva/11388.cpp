#include <stdio.h>

int main()
{
  int t;
  while(scanf("%d", &t)==1){
    while(t--){
    int a, b;
    scanf("%d %d", &a, &b);
    if(b%a == 0)
        printf("%d %d\n", a, b);
    else
    printf("-1\n");
  }
}


//there is no such pair where the lcm is not divisble by the gcd of given numbers

  return 0;
}
