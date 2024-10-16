#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int max_len = 1, current_len = 1;
    char max_char = s[0], current_char = s[0];

   
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == current_char) {
            current_len++;  // Increase count if current char matches the previous one
        } else {
            if (current_len > max_len) {
                max_len = current_len;
                max_char = current_char;
            }
            current_char = s[i];
            current_len = 1; 
        }
    }

    if (current_len > max_len) 
    {
        max_len = current_len;
        max_char = current_char;
    }

    cout << max_char << " " << max_len;

    return 0;
}
