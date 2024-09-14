#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b + c && b < a + c && c < b + a) {
        if (a == b || b == c || a == c) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    else {
        cout << "NO" << endl; 
    }

    return 0;
}
