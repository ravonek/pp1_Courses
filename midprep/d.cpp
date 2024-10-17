#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    bool isPalindrome = true;

    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        if (s.find_first_not_of(s[0]) == string::npos) {
            cout << 0 << endl;
        } else {
            cout << n - 1 << endl;
        }
    } else {
        cout << n << endl;
    }

    return 0;
}