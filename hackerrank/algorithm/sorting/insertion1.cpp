#include <stdio.h>

int main()
{
    int arr[1005], i, j, size, temp;
    while(scanf("%d", &size)==1){
        for(i= 0; i<size; i++) scanf("%d", &arr[i]);
        for(i= 1; i<size; i++){
            temp = arr[i];
            j = i- 1;
            while(temp< arr[j] && j>=0){
                arr[j+1] = arr[j];
                --j;
            for(int k = 0; k<size; k++) printf("%d ", arr[k]);
            printf("\n");
            }
            arr[j+1] = temp;
            //for(int k = 0; k<size; k++) printf("%d ", arr[k]);
            //printf("\n");
        }
        for(int k = 0; k<size; k++) printf("%d ", arr[k]);
    }

    return 0;
}
