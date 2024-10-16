#include <iostream>
#include <string>

using namespace std;

int main() {
    string N;
    cin >> N; 
    int sumOdd = 0, sumEven = 0;

    for (int i = 0; i < N.length(); i++) {
        int digit = N[i] - '0'; 
        if (i % 2 == 0) 
        {
            sumOdd += digit;
        } else 
        { 
            sumEven += digit;
        }
    }

    if (sumOdd == sumEven) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
