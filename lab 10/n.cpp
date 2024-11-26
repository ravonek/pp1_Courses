#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Структура для представления даты
struct Date {
    int day;
    int month;
    int year;
};

// Функция для сравнения двух объектов Date
bool compareDates(Date& d1, Date& d2) {
    if (d1.year != d2.year) return d1.year < d2.year;  // Сравниваем по году
    if (d1.month != d2.month) return d1.month < d2.month;  // Сравниваем по месяцу
    return d1.day < d2.day;  // Сравниваем по дню
}

int main() {
    vector<Date> dates;
    string input;

    // Чтение входных данных
    while (true) 
    {
        int day, month, year;
        cin >> day;

        // Завершающая строка "0"
        if (day == 0) break;

        cin >> month >> year;

        Date d = {day, month, year};
        dates.push_back(d);
    }

    // Сортировка с использованием функции compareDates
    sort(dates.begin(), dates.end(), compareDates);

    // Вывод отсортированных дат
    for (int i = 0; i < dates.size(); i++) 
    {
        // Выводим в формате "dd mm yyyy"
        printf("%02d %02d %04d\n", dates[i].day, dates[i].month, dates[i].year);
    }

    return 0;
}
