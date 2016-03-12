#include <stdio.h>

void print(int arr[], size_t array_size){
    int i;
    for(i = 0; i< 8; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    //printf("%d\n", sizeof(arr));
    print(arr, 32);

    return 0;
}
