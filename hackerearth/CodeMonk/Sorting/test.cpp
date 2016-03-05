#include <stdio.h>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
  int N;
  scanf("%d", &N);
  int arr[N+5];
   for(int i = 0; i< N; i++)
     scanf("%d", &arr[i]);
     sort(arr, arr+N, greater<int>());
    for(int i = 0; i<N; i++)
    printf("%d ", arr[i]);

  return 0;
}
