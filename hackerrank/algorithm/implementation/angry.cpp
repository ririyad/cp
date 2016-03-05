#include <stdio.h>

int main()
{
  //freopen("in.txt", "r", stdin);
   int T;
   while(scanf("%d", &T)==1){
     while(T--){
      int N, K;
      scanf("%d %d", &N, &K);
      int arr[N+5], count = 0;
      for(int i = 0; i< N; i++)
          scanf("%d", &arr[i]);
      for(int i = 0; i< N; i++){
        if(arr[i] <= 0) count++;
      }
      if(count>=K) printf("NO\n");
      else printf("YES\n");
    }
   }

   return 0;
}
