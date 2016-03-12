#include <stdio.h>
#include <algorithm>

using namespace std;

int gcd(int a, int b)
{
    int m = min(a, b), temp;
    for(int i = m; i>0; --i){
        if(a%i==0 && b%i==0){
        temp = i;
        return temp;
    }

}
}

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b)==2){
        //printf("%d %d\n", a, b);
        int res = gcd(a, b);
        printf("%d\n", res);
    }

    return 0;
}
