#include <stdio.h>

int main()
{
    //freopen("in.txt", "r", stdin);
    int n;
    while(scanf("%d", &n)==1){
        int arr[n+5], rev[n+5];
        for(int i = 0;i< n; i++)
            scanf("%d", &arr[i]);
        for(int i = n-1, j = 0; i>= 0; i--, j++)
            rev[j] = arr[i];

        for(int i = 0; i<n; i++)
            printf("%d ", rev[i]);
        printf("\n");
    }

    return 0;
}
