//given three sides of a triangle, wap to find 3 angles
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c)==3){
        int temp1 = pow(c, 2);
        int temp2 = pow(b, 2);
        int temp3 = pow(a, 2);
        double angleA = acos((temp2+temp1-temp3)/(2*b*c));
        printf("%lf\n", angleA);
    }

    return 0;
}
