#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Функция для преобразования числа в двоичное представление
void toBinary(int num) {
    string binary = "";
    if (num == 0) {
        binary = "0";
    } else {
        while (num > 0) {
            binary = char('0' + (num % 2)) + binary;
            num /= 2;
        }
    }
    cout << binary << endl;
}

int main() {
    int N;
    cin >> N;

    vector<int> vec(N);
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }

    // Применяем std::for_each с функцией toBinary
    for_each(vec.begin(), vec.end(), toBinary);

    return 0;
}
