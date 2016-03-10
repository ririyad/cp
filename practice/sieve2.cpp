#include <stdio.h>

int N = 20;
int status[21];

int main()
{
   int i, j;
   for(i = 2; i<= N; i++)
      status[i] = 0;

    for(i = 2; i<=N; i++){
      if(status[i] == 0){
        for(j = 2*i; j<= N; j+=i)
            status[j] = 1;
      }
    }

    for(int i = 2; i<= N; i++){
      if(status[i] == 0)
          printf("%d\n", i);
    }

   return 0;
}
