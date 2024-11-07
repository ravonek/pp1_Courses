#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> first_occurrence;
    string s;

    // Чтение строк и сохранение индекса первого вхождения
    for (int i = 1; i <= n; i++) 
    {
        cin >> s;
        if (first_occurrence.find(s) == first_occurrence.end()) 
        {
            first_occurrence[s] = i;
        }
    }

    // Создаем итератор для обхода по map
    map<string, int>::iterator it;
    for (it = first_occurrence.begin(); it != first_occurrence.end(); ++it) 
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
