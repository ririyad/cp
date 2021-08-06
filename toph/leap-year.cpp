// Problem link: https://toph.co/p/proper-leap-years


#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int year;
    while (cin >> year) {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}