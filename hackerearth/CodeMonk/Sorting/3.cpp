#include <stdio.h>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int T;
    scanf("%d", &T);
    while(T--){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int arr1[n1+5], arr2[n2+5];
    int res[n1+n2+5];

    for(int i= 0; i<n1; i++)
        scanf("%d", &arr1[i]);
    for(int i= 0; i<n2; i++)
        scanf("%d", &arr2[i]);

    int i = 0;
    int j = 0;
    int k = 0;

    while(i< n1 && j< n2){
        if(arr1[i]<= arr2[j]){
            res[k]= arr1[i];
            k++;
            i++;
        }
        else{
            res[k] = arr2[j];
            k++;
            j++;
        }
    }

    while(i < n1){
        res[k] = arr1[i];
        i++;
        k++;
    }

    while(j< n2){
        res[k] = arr2[j];
        k++;
        j++;
    }

    sort(res, res+(n1+n2), greater<int>());

    for(int i= 0; i< n1+n2; i++)
        printf("%d ", res[i]);
    printf("\n");

    }


    return 0;
}

