// Problem link: https://www.codechef.com/submit/HOOPS

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int n;
	    cin >> n;
	    if(n == 1) {
	        cout << "1\n";
	    } else {
	    cout << ceil(n/2) + 1 << "\n";
	    }
	}
	return 0;
}
