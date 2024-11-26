#include <iostream>
#include <map>
#include <string>
#include <iomanip> // Для точного вывода
using namespace std;

// Структура для хранения информации о студенте
struct StudentData {
    int count = 0;  // Количество оценок
    double sum = 0; // Сумма оценок
};

int main() {
    // Ввод количества строк
    int n;
    cin >> n;

    // Карта для хранения данных о студентах
    map<string, StudentData> students;

    // Ввод данных
    for (int i = 0; i < n; ++i) {
        string name;
        double grade;
        cin >> name >> grade;

        // Обновляем данные студента
        students[name].count++;
        students[name].sum += grade;
    }

    // Вывод результатов
    for (const auto& [name, data] : students) {
        double average = data.sum / data.count;
        printf("%s %.6f\n", name.c_str(), average);
    }

    return 0;
}