#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int assistantCount;
    cin >> assistantCount;

    map<string, string> studentToAssistant; // Словарь для хранения ассоциации студент-ассистент

    // Считываем информацию о ассистентах и их студентах
    for (int i = 0; i < assistantCount; ++i) {
        string assistantName;
        int studentCount;
        cin >> assistantName >> studentCount;

        for (int j = 0; j < studentCount; ++j) {
            string studentName;
            cin >> studentName;
            studentToAssistant[studentName] = assistantName; // Записываем ассистента для студента
        }
    }

    int requestCount;
    cin >> requestCount; // Количество запросов

    // Обрабатываем запросы
    for (int i = 0; i < requestCount; ++i) {
        string studentQuery;
        cin >> studentQuery;

        // Проверяем, есть ли у студента ассистент
        if (studentToAssistant.find(studentQuery) != studentToAssistant.end()) {
            cout << studentToAssistant[studentQuery] << endl; // Выводим имя ассистента
        } else {
            cout << "F" << endl; // Если ассистента нет, выводим "F"
        }
    }

    return 0;
}
