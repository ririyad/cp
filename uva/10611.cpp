#include <stdio.h>

int findLow(int height, int arr[], int n)
{
  int lo = 0, hi = n-1, returnVal;
  while(lo <= hi){
      int mid = (lo+hi)/2;
      if(arr[mid] < height){
        for(int i = n-1; i>= mid; i--){
          if(arr[i]< height){
            returnVal = arr[i]; break;
          }
        }
          return returnVal;
        }
        else
          hi = mid - 1;
  }
  return -1;
}

int findHigh(int height, int arr[], int n)
{
  int lo = 0, hi = n-1, returnVal;
  while(lo <= hi){
      int mid = (lo+hi)/2;
      if(arr[mid] > height){
          for(int i = 0; i<= mid; i++){
            if(arr[i]> height){
              returnVal= arr[i]; break;
            }
          }
          return returnVal;
        }
        else
          lo = mid + 1;
  }
  return -1;
}


int main()
{
  //freopen("in.txt", "r", stdin);
  int n;
  scanf("%d", &n);
  int arr[n+5];
  for(int i = 0; i< n; i++)
      scanf("%d", &arr[i]);
  int q, height;
  scanf("%d", &q);
  for(int i = 0; i< q; i++){
    scanf("%d", &height);
    int res1 = findLow(height, arr, n);
    int res2 = findHigh(height, arr, n);
    if(res1 == -1 && res2 == -1)
      printf("X X");
    else if(res1 == -1 && res2!= -1)
      printf("X %d\n", res2);
    else if(res1 != -1 && res2 == -1)
      printf("%d X\n", res1);
    else
      printf("%d %d\n", res1, res2);

  }

  return 0;
}
