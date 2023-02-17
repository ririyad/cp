// Problem Link: https://toph.co/p/icpc-is-coming-in-hot

#include <iostream>
#include <string>
using namespace std;

int main() {
    string inp;
    while(cin >> inp) {
        string str = "0123456789";
        int arr[10] = {0};
        for(int i = 0; i < inp.size(); i++) {
            for(int j = 0; j < 10; j++) {
                if(inp[i] == str[j]) {
                    arr[j]++;
                }
            }
        }
        int max_count = 0;
        int res;
        for(int k = 0; k < 10; k++) {
            if(arr[k] > max_count) {
                max_count = arr[k];
                res = k;
            }
        } 
        cout << res << endl;
    }
}