#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<string> registered_users;
    string login;

    for (int i = 0; i < n; i++) {
        cin >> login;
        if (registered_users.find(login) == registered_users.end()) {
            // Если логина нет, добавляем его и выводим сообщение
            registered_users.insert(login);
            cout << "new user added" << endl;
        } else {
            // Логин уже зарегистрирован
            cout << "user already exists" << endl;
        }
    }

    return 0;
}
