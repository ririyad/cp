#include <stdio.h>

int f1();

int main()
{
    int f1();
    double answer;
    answer = f1();

    printf("%lf\n", answer);

    return 0;
}

int f1(){
    return 100;
}
