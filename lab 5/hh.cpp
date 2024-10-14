#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);

    string word = "";
    for (int i = 0; i <= sentence.length(); ++i) {
        if (i < sentence.length() && sentence[i] != ' ') {
            word += sentence[i];
        } else {
            bool has_digit = false;
            for (char c : word) {
                if (isdigit(c)) {
                    has_digit = true;
                    break;
                }
            }
            if (!has_digit && !word.empty()) {
                cout << word << endl;
            }
            word = "";
        }
    }

    return 0;
}
