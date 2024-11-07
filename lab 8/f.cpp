#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int balance = 0;
    for (char ch : s) 
    {
        if (ch == '(') 
        {
            balance++;
        } else if (ch == ')') 
        {
            balance--;
        }
        // If balance goes negative, there's an unmatched closing bracket
        if (balance < 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    // If balance is zero, the sequence is balanced
    if (balance == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
