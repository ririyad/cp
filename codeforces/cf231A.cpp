// Problem link: https://codeforces.com/problemset/problem/231/A
#include <cstdio>

int main() {
    int N, res = 0;
    scanf("%d\n", &N);
    while(N--) {
        int p1, p2, p3;
        scanf("%d %d %d", &p1, &p2, &p3);
        int sum = p1 + p2 + p3;
        if(sum >= 2) res++;
    }
    printf("%d\n", res);
}