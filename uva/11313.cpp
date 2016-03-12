#include <stdio.h>

int main()
{
    //freopen("in.txt", "r", stdin);
    int t, n, m;
    scanf("%d", &t);
    while(t--){
        scanf("%d %d", &n, &m);
        if((n-1)%(m-1) == 0)
            printf("%d\n", (n-1)/(m-1));
        else
            printf("cannot do this\n");
    }

    return 0;
}
