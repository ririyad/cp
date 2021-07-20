// Problem link: https://practice.geeksforgeeks.org/problems/palindrome-string0817/1

#include <iostream>
#include <string>

using namespace std;


class Solution {
public:
    int isPalindrome(string s) {
        int l = 0;
        int h = s.length() - 1;
        while ( h > l) {
            if(s[l++] != s[h--]){
                return 0;
            }
        }
        return 1;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    Solution sl;
    cout << sl.isPalindrome(s);
}