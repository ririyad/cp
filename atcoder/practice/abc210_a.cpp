#include <cstdio>

int main() {
    int n, a, x, y;
    while(scanf("%d %d %d %d", &n, &a, &x, &y) == 4) {
        int diff, yen;
        if(n > a) {
            diff = n - a;
            yen = (x * a) + (y * diff);
        }
        else {
            yen = x * n;

        }
        printf("%d\n", yen);
    }
}