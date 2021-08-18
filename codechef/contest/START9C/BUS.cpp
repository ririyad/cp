#include <iostream>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, q;
        cin >> n >> m >> q;
        set<int>bus;
        bool status = true;
        while(q--) {
            char ch;
            cin >> ch;
            int i;
            cin >> i;
            if(ch == '+') {
                if(bus.find(i) != bus.end()) {
                    status = false;
                }
                else {
                    bus.insert(i);
                    if(bus.size() > m) {
                        status = false;
                    }
                }
            }
            else if(ch == '-') {
                if(bus.find(i) == bus.end()) {
                    status = false;
                }
                else {
                    bus.erase(i);
                }
            }

 
        }

            if(!status) {
                cout << "Inconsistent" << "\n";
            } else {
                cout << "Consistent" << "\n";
            }
    }
}