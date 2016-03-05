#include <stdio.h>

void fun(int arr[], size_t arr_size){
    for(int i = 0; i< arr_size; i++)
        arr[i] = i;
}

int main()
{
    int i;
    int arr[] = {0,0,0,0};
    fun(arr, 4);
    for(int i = 0; i< sizeof(arr)/sizeof(arr[0]); i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
