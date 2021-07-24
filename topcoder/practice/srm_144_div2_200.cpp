#include <iostream>
#include <string>
using namespace std;

class Time{
public:
    string whatTime(int sec) {
        int min = sec/60;
        int hour = min / 60;
        min = min % 60;
        sec = sec % 60;
        string result = to_string(hour) + ":" + to_string(min) + ":" + to_string(sec);

        return result;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    while(cin >> T) {
        Time time;
        cout << time.whatTime(T) << "\n";
    }
}