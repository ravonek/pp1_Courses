#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Создаем вектор размера N+1
    vector<long long> sequence(N + 1);

    // Лямбда-функция для вычисления n^n
    int currentIndex = 0; // Индекс для n^n
    generate(sequence.begin(), sequence.end(), [&currentIndex]() {
        int value = currentIndex;  // Сохраняем текущее значение
        currentIndex++;  // Инкрементируем переменную
        return powl(value, value); // Используем сохранённое значение
    });

    // Вывод результата
    for (size_t i = 0; i < sequence.size(); ++i) {
        cout << sequence.at(i) << " ";
    }

    cout << endl;
    return 0;
}
