// Problem link: https://atcoder.jp/contests/abc209/tasks/abc208_a

#include <cstdio>

int main() {
    int a, b;
    while(scanf("%d %d", &a, &b)==2) {
        if(a <= b && b <= 6*a){
            printf("Yes\n");
        } else{
            printf("No\n");
        }
    }
}