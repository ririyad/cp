// Problem link: https://toph.co/p/icpc-is-coming-in-hot

// Vefdict: WA


#include <iostream>
using namespace std;

int main() {
    long long unsigned num;
    while(cin >> num) {
        int freq[10] = {0};

        while(num > 0) {
            int digit = num % 10;
            freq[digit]++;
            num = num / 10;
        }
        int most_freq = 0;
        for(int i = 0; i < 10; i++) {
            if(freq[i] > most_freq)
                most_freq = i;
        }

        cout << most_freq << endl;
    }
}