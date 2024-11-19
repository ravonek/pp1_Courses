#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
    string text;
    getline(cin, text);

    // Преобразование текста в нижний регистр с использованием итераторов
    for (int i = 0; i < text.size(); i++) {
        text[i] = tolower(text[i]);
    }

    // Разделение строки на слова
    stringstream ss(text);
    string word;
    map<string, int> wordCount;

    while (ss >> word) {
        wordCount[word]++;
    }

    // Сохранение элементов map в вектор пар
    vector<pair<string, int>> wordList(wordCount.begin(), wordCount.end());

    // Пользовательский компаратор для сортировки
    sort(wordList.begin(), wordList.end(), [](const pair<string, int> &a, const pair<string, int> &b) {
        if (a.second == b.second) return a.first < b.first; // Лексикографический порядок при равных значениях
        return a.second > b.second; // Убывающий порядок количества
    });

    // Вывод результата
    for (vector<pair<string, int>>::iterator it = wordList.begin(); it != wordList.end(); ++it) {
        cout << it->first << " : " << it->second << endl;
    }

    return 0;
}
