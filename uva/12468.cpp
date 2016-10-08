#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    int input1, input2, minMoves;
    while(cin >> input1 >> input2)
    {
        if(input1 == -1 && input2 == -1)
            break;
        if(input1 > 50 )
        {
            if(input2 > 50)
            {
                minMoves = abs(input1 - input2);
                cout << minMoves << endl;
            }
            else
            {
                minMoves = input1 - input2;
                cout << minMoves << endl;
            }
        }
        else
        {
            if(input2 > 50)
            {
                minMoves = 100 - input2 + input1;
                cout << minMoves << endl;
            }
            else
            {
                minMoves = input2 - input1;
                cout << minMoves << endl;
            }
        }

    }

    return 0;
}
