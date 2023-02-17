#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int km;
        cin >> km;
        if(km <= 300) cout << 3000 << endl;
        else cout << km * 10 << endl;
    }
}
