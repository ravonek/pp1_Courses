#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Ввод количества пар
    int n;
    cin >> n;

    // Карта для хранения слов и их переводов
    map<string, string> dictionary;

    // Ввод пар "слово-перевод"
    for (int i = 0; i < n; ++i) {
        string word, translation;
        cin >> word >> translation;
        dictionary[word] = translation; // Добавляем/обновляем перевод
    }

    // Ввод слова для удаления
    string wordToRemove;
    cin >> wordToRemove;

    // Удаляем слово из карты
    dictionary.erase(wordToRemove);

    // Вывод оставшихся пар
    for (const auto& entry : dictionary) {
        cout << entry.first << " " << entry.second << endl;
    }

    return 0;
}