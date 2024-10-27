#include <iostream>
using namespace std;

void foo(string s, int num) {
    int counter = 0;
    int maxConsecutive = 0; 

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];

        if (c >= '0' && c <= '9') {
            counter++;
            if (counter > maxConsecutive) {
                maxConsecutive = counter;
            }
        } else {
            counter = 0; 
        }
    }

    if (maxConsecutive >= num) {
        cout << "Valid" << endl;
    } else {
        cout << "Not valid" << endl;
    }
}

int main() {
    int a;
    string s;
    cin >> s >> a;
    foo(s, a);

    return 0;
}
