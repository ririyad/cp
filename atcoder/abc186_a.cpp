// Problem link: https://atcoder.jp/contests/abc187/tasks/abc187_a

#include <cstdio>

int SOG(int x) {
    int sum = 0, temp;
    while(x > 0) {
        temp = x % 10;
        sum += temp;
        x = x / 10;
    }
    return sum;
}

int main() {
    int x, y;
    while(scanf("%d %d", &x, &y) == 2) {
        int sog1 = SOG(x);
        int sog2 = SOG(y);
        if(sog1 > sog2) {
            printf("%d\n", sog1);
        }

        else {
            printf("%d\n", sog2);
        }
    }
}