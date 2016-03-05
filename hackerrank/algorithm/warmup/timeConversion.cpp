#include <stdio.h>
#include <string.h>

int main()
{
    int hour, min;
    char second[100], arr[100];

    sscanf(arr,"%d:%d:%s", &hour, &min, second);
    printf("%d:%d:%s\n",hour, min, second);

    return 0;
}
