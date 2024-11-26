#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of login attempts

    map<string, int> loginAttempts; // Map to store login names and their attempt counts

    for (int i = 0; i < n; ++i) {
        string login, password;
        cin >> login >> password; // Read login and password
        loginAttempts[login]++;   // Increment the count for this login
    }

    // Use a traditional for loop to iterate through the map
    for (map<string, int>::iterator it = loginAttempts.begin(); it != loginAttempts.end(); ++it) {
        string login = it->first;
        int attempts = it->second;
        if (attempts > 3) {
            cout << login << " is hacked" << endl;
        } else {
            cout << login << " is valid" << endl;
        }
    }

    return 0;
}
