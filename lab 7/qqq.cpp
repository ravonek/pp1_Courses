#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

bool compareByValueDesc(pair<string, double>& a, pair<string, double>& b) 
{
    if (a.second == b.second) {
        return a.first > b.first;  // Сортировка по имени в обратном порядке, если проценты равны
    }
    return a.second > b.second;     // Сортировка по процентам по убыванию
}

int main() 
{
    int n;
    cin >> n;

    map<string, int> m;  // Для хранения имен студентов и их баллов

    int overall = 0;

    // Считываем имена и баллы
    for (int i = 0; i < n; i++) 
    {
        string name;
        int score;
        cin >> name >> score;
        m[name] += score;  // Суммируем баллы для каждого студента
        overall += score;  // Общая сумма баллов
    }

    // Вектор для хранения пар (имя, процент)
    vector<pair<string, double>> v;

    // Вычисляем проценты
    for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it) 
    {
        double score = (it->second * 100.0) / overall;  // Вычисляем процент
        v.push_back(make_pair(it->first, score));       // Сохраняем в вектор
    }

    // Сортируем вектор по значениям (процентам) в порядке убывания и по имени, если процент одинаковый
    sort(v.begin(), v.end(), compareByValueDesc);

    // Выводим результат
    for (int i = 0; i < v.size(); i++) 
    {
        cout << v[i].first << " " << v[i].second << "%" << endl;
    }

    return 0;
}
