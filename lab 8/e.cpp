#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    unordered_map<string, int> phone_count;
    string phone_number;

    // Подсчитываем количество каждого телефонного номера
    for (int i = 0; i < n; i++)
     {
        cin >> phone_number;
        phone_count[phone_number]++;
    }

    // Подсчитываем, сколько номеров встречаются ровно три раза
    int count = 0;
    for (unordered_map<string, int>::iterator it = phone_count.begin(); it != phone_count.end(); ++it) {
        if (it->second == 3) 
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
