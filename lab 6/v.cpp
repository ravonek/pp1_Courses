#include <iostream>

using namespace std;

void decimalToHex(int decimal) {
    if (decimal == 0) {
        cout << "0";
        return;
    }

    string hex = "";
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hex = char(remainder + '0') + hex; 
        } else {
            hex = char(remainder - 10 + 'A') + hex; 
        }
        decimal /= 16; 
    }

    cout << hex; 
}

int main() {
    int decimal;
    cin >> decimal;

    decimalToHex(decimal); // Call the void function
    cout << endl; // Print a newline for better output formatting

    return 0;
}
