#include <stdio.h>

#define MAX 10000000
#define LLU long long unsigned
LLU arr[MAX];

LLU cyclelength(LLU m){
    LLU tempm, count = 0;
    tempm = m;
    do{
        if(tempm % 2 == 0)
            tempm/= 2;
        else
            tempm = 3*tempm+1;
        count++;
    }while(tempm!=1);

    return count;
}

int main()
{
    LLU i, j;

    while(scanf("%llu %llu", &i, &j)==2){
        if(i==0 && j==0) break;
            if(i>j){
                LLU temp = i;
                i = j;
                j = temp;
            }

        LLU maxcycle = 0, maxnum = 0, temp;
        for(LLU m = i; m<= j; m++){
                if(arr[m]==0){
                    arr[m] = cyclelength(m);
                    if(arr[m] > maxcycle){
                        maxcycle = arr[m];
                        maxnum = m;
                    }
                }
                else{
                     temp = arr[m];
                     if(temp> maxcycle){
                        maxcycle = temp;
                        maxnum = m;
                     }
                }
        }

        printf("Between %llu and %llu, %llu generates the longest sequence of %llu values.\n", i, j,maxnum, maxcycle);
    }

    return 0;
}
