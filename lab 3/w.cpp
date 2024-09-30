#include <iostream>
using namespace std;

int main() {
    int decimal;
    cin >> decimal;

    string hexNumber = "";

    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexNumber = char(remainder + '0') + hexNumber;
        } else {
            hexNumber = char(remainder - 10 + 'A') + hexNumber;
        }
        decimal /= 16;
    }

    cout << hexNumber << endl; 
    return 0;
}
