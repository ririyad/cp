// Problem link: https://toph.co/p/the-titan

// 1^2 + 2^2 + 3^2+ .... + n^2 = n*(n+1)*(2*n+1)/6

#include <cstdio>

int main() {
    int n;
    while(scanf("%d", &n)==1) {
        int result = (n)*(n+1)*(2*n+1)/6;
        printf("%d\n", result);
    }
}