#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();  // Игнорируем символ новой строки после чтения n
    set<char> commonChars; // Множество для хранения общих символов

    // Чтение первой строки
    string str;
    getline(cin, str);
    for (char c : str) {
        commonChars.insert(c); // Добавляем символы первой строки
    }

    // Обработка остальных строк
    for (int i = 1; i < n; i++) {
        getline(cin, str);
        set<char> currentChars(str.begin(), str.end()); // Создаем множество для текущей строки

        // Перекрестное сравнение и оставляем только общие символы
        set<char>::iterator it; // Объявляем итератор для множества
        for (it = commonChars.begin(); it != commonChars.end(); ) {
            if (currentChars.find(*it) == currentChars.end()) {
                it = commonChars.erase(it); // Удаляем, если символ не найден
            } else {
                ++it; // Переход к следующему символу
            }
        }
    }

    // Вывод результатов
    if (commonChars.empty()) {
        cout << "NO COMMON CHARACTERS" << endl;
    } else {
        for (char c : commonChars) {
            cout << c << " "; // Выводим общие символы
        }
        cout << endl;
    }

    return 0;
}
