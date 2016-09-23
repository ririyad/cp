#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int noOfCanHarryShot, noOfCanLarryShot;
    while(cin >> noOfCanHarryShot >> noOfCanLarryShot)
    {
        int summation = noOfCanHarryShot + noOfCanLarryShot - 1;
        int noOfCanHarryNotShot = summation - noOfCanHarryShot;
        int noOfCanLarryNotShot = summation - noOfCanLarryShot;

        cout << noOfCanHarryNotShot << " " << noOfCanLarryNotShot << endl;
    }

    return 0;
}