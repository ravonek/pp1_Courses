#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();  // Игнорируем символ новой строки после ввода n

    map<string, set<int>> attendance; // Хранит имена студентов и дни посещения

    // Считываем данные о посещаемости
    for (int i = 0; i < n; i++) {
        string name;
        int day;
        cin >> name >> day;

        // Добавляем день в множество для каждого студента
        attendance[name].insert(day);
    }

    // Используем итератор для обхода результата
    map<string, set<int>>::const_iterator it;
    for (it = attendance.begin(); it != attendance.end(); ++it) {
        // Создаем копии значений
        string name = it->first;  // Копируем имя
        set<int> days = it->second; // Копируем множество дней

        // Проверяем, сколько уникальных дней посещал студент
        if (days.size() >= 3) {
            cout << name << " +1" << endl; // Бонус
        } else {
            cout << name << " NO BONUS" << endl; // Нет бонуса
        }
    }

    return 0;
}
