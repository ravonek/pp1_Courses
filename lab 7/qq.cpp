#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> scores;
    int totalPoints = 0;

    // Ввод данных и накопление баллов
    for (int i = 0; i < n; ++i) {
        string name;
        int score;
        cin >> name >> score;
        scores[name] += score;
        totalPoints += score;
    }

    // Переносим пары (имя, баллы) в вектор
    vector<pair<string, int>> scoreVector;
    for (const auto& entry : scores) {
        scoreVector.emplace_back(entry.first, entry.second);
    }

    // Сортировка по убыванию значений баллов
    sort(scoreVector.begin(), scoreVector.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second; // Сортировка по убыванию баллов
    });

    // Вывод результата
    for (const auto& entry : scoreVector) {
        double percentage = (entry.second * 100.0) / totalPoints; // Вычисление процента
        cout << entry.first << " " << fixed;
        // Определяем количество знаков после запятой в зависимости от значения
        if (percentage == static_cast<int>(percentage)) {
            cout << setprecision(0) << percentage << "%" << endl; // Если число целое
        } else if (percentage > 10) {
            cout << setprecision(4) << percentage << "%" << endl; // Если больше 10
        } else {
            cout << setprecision(5) << percentage << "%" << endl; // Если меньше или равно 10
        }
    }

    return 0;
}
