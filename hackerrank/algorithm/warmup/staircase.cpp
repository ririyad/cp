#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d", &n)==1){
        int temp = n;
        for(int i = 1; i<= n; i++){
            for(int i = 1; i<= temp-1; i++)
                printf(" ");
                temp--;
            for(int j = 1; j<= i; j++){
                printf("#");
            }
            printf("\n");
        }
    }

    return 0;
}
