#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <iomanip>
#include <algorithm>
using namespace std;

// Структура для хранения данных о студенте
struct StudentData {
    double sum = 0.0; // Сумма GPA
    int count = 0;    // Количество семестров
};

// Функция для пользовательской сортировки
bool comparator(const pair<string, double>& a, const pair<string, double>& b) {
    if (a.second != b.second)
        return a.second > b.second; // Сортировка по убыванию GPA
    return a.first < b.first;       // Сортировка по имени в алфавитном порядке
}

int main() {
    int n;
    cin >> n;

    map<string, StudentData> students;

    // Считываем записи
    for (int i = 0; i < n; ++i) {
        string name;
        double gpa;
        cin >> name >> gpa;

        students[name].sum += gpa;
        students[name].count++;
    }

    // Вычисляем общий GPA для каждого студента
    vector<pair<string, double>> results;
    for (const auto& entry : students) {
        double overallGPA = entry.second.sum / entry.second.count;
        results.emplace_back(entry.first, overallGPA);
    }

    // Сортировка по убыванию GPA и по имени
    sort(results.begin(), results.end(), comparator);

    // Вывод результатов
    for (const auto& entry : results) {
        printf("%s: %.3f\n", entry.first.c_str(), entry.second);
    }

    return 0;
}