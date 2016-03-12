#include <stdio.h>

int main()
{
    int a[] = {1,2,3,4,5,6};
    //printf("%u\n", sizeof(a));
    int *ptr = (int*)(&a+1);
    printf("%d ", *(ptr-2));

    return 0;
}
