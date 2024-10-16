#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool inc  = true;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] < s[i - 1]) {
            inc = false;
            break;
        }
    }

    if (inc) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
