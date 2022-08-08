#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int w1, w2, x1, x2, m;
		cin >> w1 >> w2 >> x1 >> x2 >> m;
		int low = x1 * m;
		int high = x2 * m;
		int diff = w2 - w1;
		if(diff >= low && diff <= high) {
			cout << "1\n";
		} else {
			cout << "0\n";
		}
	}
}