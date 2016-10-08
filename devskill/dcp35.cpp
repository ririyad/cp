#include <stdio.h>
#include <math.h>

int main()
{
    int testCase;
    while(scanf("%d", &testCase)==1)
    {
        for(int i = 1; i<= testCase; i++)
        {
            double number;
            scanf("%lf", &number);
            double res = sqrt(number);
            int truncated = (int)res;
            if(truncated == res)
                printf("Case %d: YES\n", i);
            else
                printf("Case %d: NO\n", i);
        }
    }

    return 0;
}
