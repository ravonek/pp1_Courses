#include <iostream>
#include <sstream>  
#include <string>
using namespace std;

int main() {
    string sentence;
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;
    
    while (ss >> word) { 
        bool has_digit = false;
        
        for (char c : word) {
            if (isdigit(c)) {
                has_digit = true;
                break;  
            }
        }

        if (!has_digit) {
            cout << word << endl;
        }
    }

    return 0;
}
