#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int max = -36, temp;
    int arr[6][6], res[6];
    for(int i = 0; i<6; i++){
        for(int j = 0; j<6; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            temp = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1]+arr[i+2][j]+
            arr[i+2][j+1]+arr[i+2][j+2];


            if(temp > max) max = temp;
        }
      }

    cout << max << endl;


    return 0;
}
