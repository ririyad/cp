#include <iostream>
#include <string>

using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    while (testCase--)
    {
        int n, p = 0;
        string inst1, inst2,  movement[110];
        int anotherpos;
        cin >> n;

        for(int i = 1; i <= n; i++)
        {
            cin >> inst1;
            if(inst1 == "LEFT")
            {
                p--;
                movement[i] = inst1;
            }
                
            else if(inst1 == "RIGHT")
            {
                p++;
                movement[i] = inst1;
            }
                
            else
            {
                cin >> inst2 >> anotherpos;
                if(movement[anotherpos] == "LEFT")
                {
                    p--;
                    movement[i] = "LEFT";
                }
                 
                else if(movement[anotherpos] == "RIGHT")
                {
                     p++;
                     movement[i] = "RIGHT";
                }
                   
            }

        }
          cout << p << endl;
    }
    
}