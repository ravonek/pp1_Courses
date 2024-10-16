#include <iostream>
#include <string>

using namespace std;

int main() {
    char ch;
    string s;

    cin >> ch;
    cin >> s;

    string result;

    for (char c : s) {
        if (c != ch) {
            result += c;
        }
    }

    cout << result << endl;

    return 0;
}
