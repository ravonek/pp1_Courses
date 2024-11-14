#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int num;
        cin >> num;
        string binary;
        
        // Convert number to binary string
        while (num > 0) {
            binary = (num % 2 == 0 ? '0' : '1') + binary;
            num /= 2;
        }
        
        // Stack to check if we can cross out all bits
        stack<char> s;
        bool isGood = true;
        
        for (char bit : binary) {
            if (bit == '1') {
                s.push(bit);  // Push '1' to stack
            } else if (bit == '0') {
                if (!s.empty() && s.top() == '1') {
                    s.pop();  // Cross out '1' if it's the left neighbor
                } else {
                    isGood = false;  // Cannot cross out
                    break;
                }
            }
        }
        
        // If stack is empty, it's a good number
        if (isGood && s.empty()) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
