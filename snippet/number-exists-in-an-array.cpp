// Given a number and an array, determine if the number exists in the array

#include <iostream>
#include <vector>
#include <iterator> // for std::find()
#include <algorithm> // for std::begin(), end()
using namespace std;

int main() {
    int inputSize, numberToCheck;
    cin >> inputSize >> numberToCheck ;
    vector<int>v(inputSize);

    for(int i = 0; i < inputSize; i++) {
        cin >> v[i];
    }
    bool exists = find(begin(v), end(v), numberToCheck) != end(v);
    if(exists) cout << "Exists\n";
    else cout << "Does not exist\n";
}