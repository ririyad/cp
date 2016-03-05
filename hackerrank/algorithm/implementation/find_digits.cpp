#include <stdio.h>

int main()
{
   int T;
   while(scanf("%d", &T)==1){
      while (T--) {
          int N, count = 0;
          scanf("%d", &N);
          int temp = N;
          while(temp> 0){
            int digit = temp%10;
            if(digit == 0) goto jump;
            if(N%digit == 0) count++;
            jump:
            temp = temp/10;

          }
          printf("%d\n", count);
      }
   }

   return 0;
}
