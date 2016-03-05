#include <stdio.h>

int main()
{
    double a, b, c;
    while(scanf("%lf %lf %lf", &a, &b, &c)==3){
        printf("%lf\n", a*b*c);
    }

    return 0;
}
