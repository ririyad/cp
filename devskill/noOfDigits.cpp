#include <stdio.h>

int main()
{
    int testCase;
    while(scanf("%d", &testCase)==1)
    {
        while(testCase--)
        {
            int number;
            scanf("%d", &number);
            int count = 0;
            do
            {
                number = number / 10;
                count++;
            }while(number > 0);

            printf("%d\n", count);
        }
    }

    return 0;
}
