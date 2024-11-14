#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// // Компаратор для сортировки по сумме элементов пары
// bool compare(pair<int, int>& a, pair<int, int>& b) {
//     return a.first < b.first;  // Сравниваем по сумме
// }

int main() {
    int n;
    cin >> n;

    // Вектор для хранения пар (сумма чисел и индекс)
    vector<pair<int, int> > arr(n);

    // Чтение данных
    for (int i = 0; i < n; i++) {
        int first, second;
        cin >> first >> second;
        int sum = first + second;  // Вычисляем сумму
        arr.push_back(make_pair(sum, i + 1));     // Сохраняем сумму и индекс
    }

    // Сортировка массива пар по сумме чисел
    sort(arr.begin(), arr.end() /*, compare*/ );

    // Вывод индексов отсортированных пар
    for (int i = 0; i < arr.size(); i++) 
    {
        if( arr.at(i).second != 0)cout << arr.at(i).second << " ";  // Выводим индекс
    }

    return 0;
}
