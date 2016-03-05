#include <stdio.h>

void func1();

int main()
{
    func1();

    return 0;
}

void func1(){

    printf("This text is printed");

    return;

    printf("This will never be printed");
}
