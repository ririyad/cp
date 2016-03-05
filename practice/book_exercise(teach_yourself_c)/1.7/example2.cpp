#include <stdio.h>

void func1(void); //prototype
void func2(void); //prototype

int main()
{
    func2();
    printf("3\n");

    return 0;
}

void func2(void){
    func1();
    printf("2");
}

void func1(void){
    printf("1");
}
