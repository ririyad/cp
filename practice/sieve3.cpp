#include <stdio.h>
#include <math.h>

int N = 51;
int arr[55];

int main()
{
   int i, j;
   for(i = 2; i<= N; i++)
      arr[i] = 0;
    int sqN = int(sqrt((double)N));
    for(i = 3; i<= sqN; i+=2){
      if(arr[i] == 0){
        for(j = i*i; j<= N; j+= i+i){
            arr[j] = 1;
        }
      }
    }

    printf("2\n");
    for(i = 3; i<= N; i+=2){
      if(arr[i] == 0)
        printf("%d\n", i);
    }

   return 0;
}
