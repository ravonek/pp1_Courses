#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    map<string, string> document; // Словарь для хранения ключ-значений

    for (int i = 0; i < n; i++) 
    {
        string command, key;
        cin >> command >> key;

        if (command == "set") 
        {
            string value;
            cin >> value;
            document[key] = value; // Добавляем или обновляем значение по ключу
        } 
        else if (command == "get") 
        {
            if (document.find(key) != document.end()) 
            {
                cout << document[key] << endl; // Выводим значение по ключу
            } 
            else 
            {
                cout << "KE: no key " << key << " found in the document" << endl;
            }
        }
    }

    return 0;
}
