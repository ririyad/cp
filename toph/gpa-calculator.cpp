// Problem link: https://toph.co/p/gpa-calculator

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for(int tc = 1; tc <= T; tc++) {
        int n;
        cin >> n;
        vector<float>v(n);
        float sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
        }

        float avg = sum / n;
        cout.precision(3);
        cout << "Case " << tc <<": " << fixed << avg << "\n";
    }
}