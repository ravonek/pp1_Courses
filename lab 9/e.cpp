#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // Для std::accumulate

using namespace std;

// Пользовательский компаратор для сортировки
bool comparator(const vector<int>& a, const vector<int>& b) {
    // Сравнение по сумме элементов
    int sumA = accumulate(a.begin(), a.end(), 0);
    int sumB = accumulate(b.begin(), b.end(), 0);
    if (sumA != sumB) {
        return sumA < sumB;
    }

    // Сравнение по размеру строки
    if (a.size() != b.size()) {
        return a.size() < b.size();
    }

    // Сравнение по соответствующим элементам
    return a < b; // Лексикографическое сравнение
}

int main() {
    int N;
    cin >> N;

    vector<vector<int> > arr(N);

    // Считываем строки
    for (int i = 0; i < N; i++) {
        int M;
        cin >> M;
        arr[i].resize(M);
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }

    // Сортируем строки с помощью компаратора
    sort(arr.begin(), arr.end(), comparator);

    // Выводим отсортированный массив
    for (int i = 0; i < arr.size(); i++) { // Обычный цикл по индексам
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
