#include <iostream>
using namespace std;

int main() {
    string input;
    cin >> input;

    int vowelCount = 0;

    // Перебираем строку и считаем гласные
    for (int i = 0; i < input.length(); ++i) {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || 
            input[i] == 'o' || input[i] == 'u') {
            vowelCount++;
        }
    }

    cout << vowelCount << endl;

    return 0;
}
