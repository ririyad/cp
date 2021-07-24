// Problem Statetement: given a second, convert it to H:M:S

#include <iostream>

using namespace std;

int main() {
    int sec, min, hour;
    cin >> sec; // taking second as input
    min = sec / 60; // we left some second(s) here
    hour = min / 60; // wa left some minite(s) here

    cout << "H:" << hour << " M:" << (min % 60) << " S:" << (sec%60); // now we are counting the minutes and seconds
}