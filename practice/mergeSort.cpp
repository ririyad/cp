#include <stdio.h>

void merge_array(int n, int m, int arrN[], int arrM[])
{
    int arrC[n+m+5];
    int i=0, j=0, k=0;
    while(i< n && j< m){
        if(arrN[i]<= arrM[j]){
            arrC[k]= arrN[i];
                i++;k++;
        }
        else{
            arrC[k]= arrM[j];
            j++; k++;
        }
    }

    if(i< n){
            arrC[k]= arrN[i];
            i++;
            k++;
    }

    else if(j< m){
                arrC[k]= arrM[j];
                j++;
                k++;
    }

    for(int i= 0; i<n+m; i++)
        printf("%d ", arrC[i]);

}


int main()
{
    freopen("in.txt", "r", stdin);
    int n, m;
    scanf("%d %d", &n, &m);
    int arrN[n+5], arrM[m+5];
    for(int i= 0; i< n; i++)
        scanf("%d", &arrN[i]);
    for(int i= 0; i< m; i++)
        scanf("%d", &arrM[i]);
    merge_array(n, m, arrN, arrM);

    return 0;
}
