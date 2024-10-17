#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Array to count occurrences of each digit from '0' to '9'
    int count[10] = {0};

    // Count occurrences of each character
    for (char c : s) {
        count[c - '0']++;
    }

    // Output the results in increasing order
    for (int i = 0; i <= 9; ++i) {
        if (count[i] > 0) {
            cout << i << ": " << count[i] << endl;
        }
    }

    return 0;
}