// Problem Link: https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1?page=1&curated[]=2&sortBy=submissions

// The solution wont be submitted as the platform enforces predefined driver code

#include <iostream>
#include <vector>
using namespace std;


int findMin(vector<int>& v) {
    int min = v[0];
    for(int i = 1; i < v.size(); i++) {
        if(v[i] < min) {min = v[i];}
    }
    return min;
}

int findMax(vector<int>& v) {
    int max = v[0];
    for(int i= 1; i < v.size(); i++) {
        if(v[i] > max) {max = v[i];}
    }

    return max;
}

int main() {
    int size;
    while(cin >> size) {
        int temp;
        vector<int>v;
        for(int i = 0; i < size; i++) {
            cin >> temp;
            v.push_back(temp);
        }
        int minVal = findMin(v);
        int maxVal = findMax(v);

        cout << "min = " << minVal << ", max = " << maxVal << endl;
    }
}
