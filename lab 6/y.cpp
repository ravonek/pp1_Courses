#include <iostream>
#include <string>
using namespace std;

string normalize(const string& word) {
    string result;
    for (char c : word) {
        char lower = tolower(c);
        if (lower == 'p') {
            result += 'b';
        } else if (lower == 'e') {
            result += 'i';
        } else {
            result += lower;
        }
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string word1, word2;
        cin >> word1 >> word2;
        if (normalize(word1) == normalize(word2)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}