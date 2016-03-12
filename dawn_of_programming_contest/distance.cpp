//wap to find distance between 2 2D points, (x1, y1) and (x2, y2)
#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2)==4){
    int temp1 = pow((x2-x1),2);
    int temp2 = pow((y2-y1), 2);

    double distance = sqrt(temp1+temp2);
    printf("%lf\n", distance);
    }

    return 0;
}
