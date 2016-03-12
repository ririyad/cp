#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d", &n)==1 && n!= 0){
        int x = 0;
        while(n>=3){
            x = x + (n/3);
            n = (n/3) + (n%3);
            if(n==2) n+=1;
        }

        printf("%d\n", x);

    }

    return 0;
}
