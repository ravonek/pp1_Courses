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

    // Переносим пары (имя, процент) в вектор
    vector<pair<string, double>> percentages;
    for (map<string, int>::const_iterator entry = scores.begin(); entry != scores.end(); ++entry) {
        percentages.emplace_back(entry->first, (entry->second * 100.0) / totalPoints);
    }

    // Сортировка по возрастанию процентов
    sort(percentages.begin(), percentages.end());

    // Изменение порядка на противоположный
    reverse(percentages.begin(), percentages.end());

    // Вывод результата с правильным форматированием
    for (vector<pair<string, double>>::const_iterator entry = percentages.begin(); entry != percentages.end(); ++entry) {
        // Форматирование числа с плавающей запятой
        if (entry->second == static_cast<int>(entry->second)) {
            // Если число целое
            cout << entry->first << " " << fixed << setprecision(0) << entry->second << "%" << endl;
        } else {
            // Если число не целое
            cout << entry->first << " " << fixed << setprecision(7) << entry->second << "%" << endl; // 7 знаков после запятой
        }
    }

    return 0;
}
