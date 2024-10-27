#include <iostream>
using namespace std;

bool isUsual(int num) {
    // If the number is less than or equal to zero, it's not usual
    if (num <= 0) {
        return false;
    }

    // Divide by 2, 3, and 5 as long as possible
    while (num % 2 == 0) {
        num /= 2;
    }
    while (num % 3 == 0) {
        num /= 3;
    }
    while (num % 5 == 0) {
        num /= 5;
    }

    // If the remaining number is 1, it is a usual number
    return (num == 1);
}

int main() {
    int n;
    cin >> n;

    if (isUsual(n)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
