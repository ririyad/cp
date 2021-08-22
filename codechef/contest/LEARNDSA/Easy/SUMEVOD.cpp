// Problem link: https://www.codechef.com/CCSTART2/problems/SUMEVOD

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    long long odd = 0, even = 0;
    int oddN = n, evenN = n;
    for(long long i = 1; ; i+=2) {
        odd += i;
        oddN--;
        if(oddN == 0) break;
    }
    for(long long i = 2; ; i+=2) {
        even += i;
        evenN--;
        if(evenN == 0) break;
    }
    cout << odd << " " << even << "\n";
}