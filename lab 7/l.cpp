#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

bool isStrongPassword(string &password) {
    bool hasLower = false, hasUpper = false, hasDigit = false;
    for (char ch : password) {
        if (islower(ch)) hasLower = true;
        else if (isupper(ch)) hasUpper = true;
        else if (isdigit(ch)) hasDigit = true;

        if (hasLower && hasUpper && hasDigit) return true;
    }
    return false;
}

int main() 
{
    int n;
    cin >> n;
    
    set<string> strongPasswords;
    
    for (int i = 0; i < n; ++i) {
        string password;
        cin >> password;
        
        if (isStrongPassword(password)) {
            strongPasswords.insert(password); 
        }
    }
    
    cout << strongPasswords.size() << endl;

    for (set<string>::iterator it = strongPasswords.begin(); it != strongPasswords.end(); ++it) {
        cout << *it << endl;
    }

    return 0;
}
