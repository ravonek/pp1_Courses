#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    string s1 = s;

    reverse(s1.begin(), s1.end());

    if (s1 == s) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
