#include <cstdio>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int a, b, c, d, L;
    while(scanf("%d %d %d %d %d", &a, &b, &c, &d, &L)==5){
        if(a==0 && b == 0 && c ==0 && d == 0 && L == 0) break;
        int count = 0;
        for(int i = 0; i<= L; i++){
            int res = a*i*i + b*i + c;
            if(res%d == 0) count++;
        }
        printf("%d\n", count);
    }

    return 0;
}
