// Problem Link: https://www.codechef.com/problems/HS08TEST

#include <cstdio>

using namespace std;

int main() {
    int x;
    float y;
    while(scanf("%d %f", &x, &y)==2) {
        if(x % 5 == 0) {
            if(y-x-0.5 >= 0){
                y = y -x - 0.5;
                printf("%0.2f\n", y);
            }
            else {
                printf("%0.2f\n", y);
            }
        }
        else {
            printf("%0.2f\n", y);
        }
    }
}