#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Создаем копию массива
    int reversed[N];
    for (int i = 0; i < N; ++i) {
        reversed[i] = arr[i];
    }

    // Реверсируем массив с помощью std::reverse
    reverse(reversed, reversed + N);

    // Сравниваем оригинальный массив с перевернутым
    for (int i = 0; i < N; ++i) {
        if (arr[i] == reversed[i]) {
            cout << "OK" << endl;
        } else {
            cout << "Instead of " << arr[i] << " here was " << reversed[i] << endl;
        }
    }

    return 0;
}
