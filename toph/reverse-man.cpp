    #include <iostream>
    #include <string>
    using namespace std;

    int main() {
        string str;
        while(getline(cin, str)) {
            int len = str.length();
            string revString;
            for(int i = len-1; i >= 0; i--) {
                revString.push_back(str[i]);
            }
            cout << revString << "\n";
        }
    }

