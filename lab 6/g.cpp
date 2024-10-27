
#include <iostream>

using namespace std;

    void removeVowels(string s) {
        string result = "";
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
                c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
                result += c;
            }
        }   
        cout << result;
    }

    int main() 
    {
        string s;
        getline(cin, s);
        removeVowels(s);


        return 0;
    }
