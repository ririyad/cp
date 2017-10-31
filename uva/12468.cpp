//problem link: https://goo.gl/wnj1we

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b)==2)
    {
        int res;
        if(a==-1 && b== -1)
            break;
        if(a < b)
        {
            if((b-a) > 50)
                res = 100-(b-a);
            else
                res = b - a;
        }

        else
        {
            if((a-b) > 50)
                res = 100 - (a-b);
            else
                res = a - b;
        }

        printf("%d\n", res);
    }

    return 0;
}
