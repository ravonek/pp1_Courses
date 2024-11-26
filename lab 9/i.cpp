#include <bits/stdc++.h>
using namespace std;

// Функция для проверки, все ли элементы одинаковы
bool isEverythingEqual(vector<int>& v) {
    int first = v[0];
    for (int i = 0; i < v.size(); i++) {
        if (v[i] != first) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> v[i];
    }

    // Хранение уникальных элементов в порядке добавления
    vector<int> uniques;
    for (int i = 0; i < n; i++) {
        if (find(uniques.begin(), uniques.end(), v[i]) == uniques.end()) {
            uniques.push_back(v[i]);
        }
    }

    // Если все элементы одинаковы, просто вывести первый элемент
    if (isEverythingEqual(v)) 
    {
        cout << v[0];
        return 0;
    }

    // Если вектор отсортирован по убыванию, вывести его сразу
    if (is_sorted(v.rbegin(), v.rend())) 
    {
        for (int i = 0; i < n; i++) {
            cout << v.at(i) << " ";
        }
        cout << endl;
        return 0;
    }

    // Генерация перестановок уникальных элементов
    do {
        for (int i = 0; i < uniques.size(); i++) {
            cout << uniques.at(i) << " ";
        }
        cout << endl;
    } while (next_permutation(uniques.begin(), uniques.end()));

    return 0;
}