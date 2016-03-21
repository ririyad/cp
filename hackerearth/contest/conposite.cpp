#include <stdio.h>
#include <math.h>

int arr[100000];
int main()
{
  int n, sqrtN;
   while(scanf("%d", &n)==1){
     for(int i = 2; i<=n; i++)
        arr[i] = 0;
     sqrtN = int(sqrt((double)n));
     //printf("%d\n", sqrtN);
     for(int i = 3; i<= sqrtN; i+=2){
       if(arr[i]==0){
         for(int j = i*i; j<= n; j+=i+i)
            arr[i] = 1;
       }
     }
     for(int i = 2; i<=n; i++){
       if(arr[i]==1)
          printf("%d ", arr[i]);
          printf("\n");
     }
   }

   return 0;
}
