#include <stdio.h>

int gcd(int a, int b){
    int numerator, denominator, remainder;
    if(a>b){
        numerator = a;
        denominator = b;
    }
    else{
        numerator = b;
        denominator = a;
    }

    remainder = numerator%denominator;
    while(remainder!=0){
        numerator = denominator;
        denominator = remainder;
        remainder = numerator%denominator;
    }

    return denominator;
}


int main()
{
  int a, b;
  while(scanf("%d %d", &a, &b)==2){
    printf("gcd is: %d\n", gcd(a, b));
    printf("lcm is %d\n", (a*b)/gcd(a, b));
  }

  return 0;
}
