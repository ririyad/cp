#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, inp;
    vector<int> v1;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> inp;
        v1.push_back(inp);
    }
    bool flag = true;
    for(int i = 0; i < n-1; i++) {
        if(v1[i] > v1[i+1]) {
            flag = false;
        }
    }
    if(flag) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }
}