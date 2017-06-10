#include <stdio.h>
#include <math.h>

int main()
{
   int T;
   while(scanf("%d", &T)==1){
     while(T--){
      int a, b, c, k;
      while(scanf("%d %d %d %d", &a, &b, &c, &k)==4){
         if(c == k || c>k)
          printf("0\n");
         else if((a+b+c>=k) || (a+b>=k) || (b+c>=k) || (a+c>=k))
          printf("1\n");
         else if(a+b+c < k){
           int sum = a+b+c;
           int i;
           for(i = 1; sum < k; i++){
             sum = a*pow(i, 2) + b*pow(i, 1) + c;
           }
           printf("%d\n", i-1);
         }
      }
    }
   }

   return 0;
}
