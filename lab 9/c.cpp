#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

// Глобальная переменная для индекса
int currentIndex = 0;

// Отдельная функция для вычисления n^n
long long calculatePower() {
    int value = currentIndex;  // Сохраняем текущее значение
    currentIndex++;  // Инкрементируем переменную
    return powl(value, value); // Используем сохранённое значение
}

int main() {
    int N;
    cin >> N;

    // Создаем вектор размера N+1
    vector<long long> sequence(N + 1);

    // Заполняем последовательность с использованием generate() и функции calculatePower
    generate(sequence.begin(), sequence.end(), calculatePower);

    // Вывод результата
    for (size_t i = 0; i < sequence.size(); ++i) {
        cout << sequence.at(i) << " ";
    }

    cout << endl;
    return 0;
}
