#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    char furthestChar = 'a';

    for (char c : input) {
        if (c > furthestChar) {
            furthestChar = c;
        }
    }

    cout << furthestChar << endl; 

    return 0;
}
