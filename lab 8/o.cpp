#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, m;
    cin >> n;

    map<string, string> studentData;

    // Read student logins and passwords
    for (int i = 0; i < n; ++i) {
        string login, password;
        cin >> login >> password;
        studentData[login] = password;
    }

    cin >> m;

    // Process each request
    for (int i = 0; i < m; ++i) {
        string login, password;
        cin >> login >> password;

        if (studentData.find(login) == studentData.end()) {
            cout << "login error" << endl;
        } else if (studentData[login] != password) {
            cout << "password error" << endl;
        } else {
            cout << "correct password" << endl;
        }
    }

    return 0;
}
