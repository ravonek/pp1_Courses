#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Функция проверки на палиндром
bool isPalindrome(const vector<int>& seq) {
    int n = seq.size();
    for (int i = 0; i < n / 2; i++) {
        if (seq[i] != seq[n - i - 1]) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);

    // Чтение последовательности
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Сортируем последовательность для генерации перестановок в порядке возрастания
    sort(arr.begin(), arr.end());

    do {
        // Проверяем каждую перестановку на палиндром
        if (isPalindrome(arr)) {
            for (int num : arr) {
                cout << num << " ";
            }
            cout << endl;
            return 0;
        }
    } while (next_permutation(arr.begin(), arr.end()));

    // Если палиндром не найден
    cout << "Impossible" << endl;
    return 0;
}
