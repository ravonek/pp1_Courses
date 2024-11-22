#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> beads(N);

    // Считываем последовательность
    for (int i = 0; i < N; i++) {
        cin >> beads[i];
    }

    // Удаляем подряд идущие дублирующиеся элементы
    vector<int>::iterator it = unique(beads.begin(), beads.end());

    // Обрезаем вектор до уникальных элементов
    beads.erase(it, beads.end());

    // Выводим результат
    for (int i = 0; i < beads.size(); i++) {
        cout << beads[i] << " ";
    }

    return 0;
}
