#include <iostream>
#include <vector>
using namespace std;

int main() {
    int q;
    cin >> q;

    vector<int> arr;
    bool isReversed = false;  // Флаг для отслеживания переворота

    for (int i = 0; i < q; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            int x;
            cin >> x;
            // В зависимости от состояния флага, добавляем в конец или в начало
            if (isReversed) {
                arr.insert(arr.begin(), x);  // Добавляем в начало, если флаг перевернут
            } else {
                arr.push_back(x);  // Добавляем в конец, если флаг не перевернут
            }
        } else if (type == 2) {
            isReversed = !isReversed;  // Переключаем состояние флага
        }
    }

    // Выводим массив с учетом состояния флага
    if (isReversed) {
        for (int i = arr.size() - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
    } else {
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
