#include <iostream>
#include <map>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int recordCount;
    cin >> recordCount;

    map<string, vector<int> > studentGPAs; // Хранит GPA студентов

    // Чтение записей студентов и их GPA
    for (int i = 0; i < recordCount; ++i) 
    {
        string studentName;
        int gpa;
        cin >> studentName >> gpa;
        studentGPAs[studentName].push_back(gpa); // Добавляем GPA к списку
    }

    vector<string> students;
    // Сохранение имен студентов
    for (map<string, vector<int> >::iterator it = studentGPAs.begin(); it != studentGPAs.end(); ++it) 
    {
        students.push_back(it->first); // Сохраняем имена студентов
    }

    // Сортируем имена студентов
    sort(students.begin(), students.end());

    // Вычисление и вывод общего GPA
    for (int i = 0; i < students.size(); i++) 
    { 
        vector<int> gpas = studentGPAs[students[i]]; 
        double totalGPA = 0;
        
        // Измененный цикл для суммирования GPA
        for (int i = 0; i < gpas.size(); i++) 
        {
            totalGPA += gpas.at(i); // Суммируем GPA
        }
        
        double overallGPA = totalGPA / gpas.size(); // Вычисляем средний GPA
        cout << students[i] << ": " << fixed << setprecision(3) << overallGPA << endl; // Выводим результат
    }

    return 0;
}
