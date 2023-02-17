// Problem link: https://cses.fi/problemset/task/1094

#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long size, temp;
    long long mov = 0;
    cin >> size;
    vector<long long>v;
    for(int i = 0; i < size; i++) {
        cin >> temp;
        v.push_back(temp);
    }
    for(int i = 1; i < size; i++) {
        if(v[i-1] > v[i]) {
            mov += v[i-1] - v[i];
            v[i] = v[i-1];
        }

    }
    cout << mov << endl;
}