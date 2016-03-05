#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a; //goes on stack
  int *p;
  p = (int*)malloc(sizeof(int));
  *p = 10;
  printf("%d\n", *p);

  return 0;
}
