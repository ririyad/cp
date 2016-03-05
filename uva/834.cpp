#include <stdio.h>
#include <algorithm>

using namespace std;
//n%d == 0 is not considered

int main()
{
    int n, d;
    while(scanf("%d %d", &n, &d)==2){
        printf("[%d;", n/d);
        n = n%d;
        while(n!=1){
            printf("%d,", d/n);
            d = d%n;
            swap(n, d);
        }
        printf("%d]\n", d);
    }

    return 0;
}
