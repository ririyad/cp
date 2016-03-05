#include <stdio.h>

int main()
{
  //freopen("in.txt", "r", stdin);
  int i, j, temp;
  while(scanf("%d %d", &i, &j)==2){
    printf("%d %d", i, j);
    if(i>j){
        temp = i;
        i = j;
        j = temp;
    }

    int res = 0;
    for(int m = i; m<= j; m++){
        int count = 1;
        int tempm = m;
        while(tempm>1){
            if(tempm%2==0)
                tempm/=2;
            else
                tempm = 3*tempm + 1;

            count++;
        }
        if(count > res) res = count;
    }

    printf(" %d\n", res);
  }

  return 0;
}
