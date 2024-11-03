#include <iostream>
#include <set>
using namespace std;

// Функция для проверки уникальности цифр
bool hasUniqueDigits(int number) {
    set<char> digits; // Множество для хранения цифр
    string numStr = to_string(number); // Преобразуем число в строку

    for (char c : numStr) {
        if (digits.find(c) != digits.end()) {
            return false; // Если цифра уже есть в множестве, значит не уникальна
        }
        digits.insert(c); // Добавляем цифру в множество
    }
    return true; // Все цифры уникальны
}

int main() {
    int l, r;
    cin >> l >> r;

    // Перебираем числа от l до r
    for (int i = l; i <= r; i++) {
        if (hasUniqueDigits(i)) {
            cout << i << endl; // Если нашли, выводим число
            return 0; // Завершаем программу
        }
    }

    // Если не нашли ни одного числа с уникальными цифрами
    cout << "Understandable, have a great day" << endl;
    return 0;
}
