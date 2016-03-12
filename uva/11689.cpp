#include <stdio.h>

int main()
{
    //freopen("in.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    while(t--){
        int e, f, c, g;
        scanf("%d %d %d", &e, &f, &c);
        g = e + f;
        int b = 0;
        while(g>=c){
            b= b + (g/c);
            g = (g/c) + (g%c);
        }

        printf("%d\n", b);
    }


    return 0;
}
