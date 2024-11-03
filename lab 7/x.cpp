#include <iostream>
#include <set>
#include <vector>
#include <algorithm> // Для сортировки
using namespace std;

int main() {
    int n1; // Количество подписок на первом аккаунте
    cin >> n1;
    cin.ignore(); // Игнорируем символ новой строки после считывания числа

    set<string> firstAccountSubscriptions; // Подписки первого аккаунта
    for (int i = 0; i < n1; i++) {
        string name;
        getline(cin, name);
        firstAccountSubscriptions.insert(name); // Добавляем имя в множество
    }

    int n2; // Количество подписок на втором аккаунте
    cin >> n2;
    cin.ignore(); // Игнорируем символ новой строки

    set<string> secondAccountSubscriptions; // Подписки второго аккаунта
    for (int i = 0; i < n2; i++) {
        string name;
        getline(cin, name);
        secondAccountSubscriptions.insert(name); // Добавляем имя в множество
    }

    vector<string> forgotToSubscribe; // Список для хранения забытых подписок

    // Поиск подписок, которых нет во втором аккаунте
    for (set<string>::iterator it = firstAccountSubscriptions.begin(); it != firstAccountSubscriptions.end(); ++it) {
        if (secondAccountSubscriptions.find(*it) == secondAccountSubscriptions.end()) {
            forgotToSubscribe.push_back(*it); // Добавляем в список забытых подписок
        }
    }

    // Добавление подписок из второго аккаунта, которых нет в первом
    for (set<string>::iterator it = secondAccountSubscriptions.begin(); it != secondAccountSubscriptions.end(); ++it) {
        if (firstAccountSubscriptions.find(*it) == firstAccountSubscriptions.end()) {
            forgotToSubscribe.push_back(*it); // Добавляем в список забытых подписок
        }
    }

    // Сортировка забытых подписок
    sort(forgotToSubscribe.begin(), forgotToSubscribe.end());

    // Вывод результатов
    for (int i = 0; i < forgotToSubscribe.size(); i++) {
        cout << forgotToSubscribe[i] << endl; // Выводим каждую забыту подписку
    }

    return 0;
}
