// Platform: CodeChef
// Platform: https://www.codechef.com/submit/PROBCAT

#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int inp;
		cin >> inp;
		if(inp >= 1 && inp < 100) {
			cout << "Easy\n";
		} else if( inp >= 100 && inp < 200) {
			cout << "Medium\n";
		} else if(inp >= 200 && inp <= 300) {
			cout << "Hard\n";
		}
	}
}