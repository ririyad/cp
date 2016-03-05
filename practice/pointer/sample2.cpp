#include <stdio.h>

int main()
{
  int *p, q;
  q = 199;
  p = &q;

  printf("%d\n", *p);

  return 0;
}
