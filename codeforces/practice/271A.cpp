#include <iostream>

using namespace std;

int main() 
{
    int year;
    while(cin >> year) {
        while(true) {
            year += 1;
            int a = year / 1000;
            int b = (year / 100) % 10;
            int c = (year/10) % 10;
            int d = year % 10;

            if(a != b && b != c && c != d && d != a && b != d && c != a) {
                cout << year << "\n";
                break;
            }
        }
    }
}