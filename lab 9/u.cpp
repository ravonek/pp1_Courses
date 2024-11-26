#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Создаем вектор фиксированного размера
    vector<int> p(n), sorted_p(n);

    // Чтение входных данных
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        sorted_p[i] = p[i]; // Заполняем sorted_p копией p
    }

    // Сортировка копии массива
    sort(sorted_p.begin(), sorted_p.end());

    // Подсчитываем количество несовпадений
    int count_mismatch = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] != sorted_p[i]) {
            count_mismatch++;
        }
    }

    // Условие корректности
    if (count_mismatch == 0 || count_mismatch == 2) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
