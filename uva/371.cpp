#include <stdio.h>

int main()
{
  //freopen("in.txt", "r", stdin);
  int i, j, temp;
  while(scanf("%d %d", &i, &j)==2){
    if(i == 0 && j==0) break;
    if(i>j){
        temp = i;
        i = j;
        j = temp;
    }

    int res = 0, longnum = 0;
    for(int m = i; m<= j; m++){
        int count = 0;
        int tempm = m;
        while(tempm>1){
            if(tempm%2==0)
                tempm/=2;
            else
                tempm = 3*tempm + 1;

            count++;
        if(count > res){
            res = count;
            longnum = m;
        }
    }
    }

    printf("Between %d and %d, %d generates the longest sequence of %d values.\n", i, j,longnum, res);
  }

  return 0;
}

