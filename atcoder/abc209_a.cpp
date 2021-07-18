// Problem link: https://atcoder.jp/contests/abc209/tasks/abc209_a

#include <cstdio>

int main() {
    int a, b;
    while(scanf("%d %d", &a, &b)==2){
        if(a < b) {printf("%d\n", b-a+1);}
        else if(a == b) {printf("1\n");}
        else {printf("0\n");}
    }
}