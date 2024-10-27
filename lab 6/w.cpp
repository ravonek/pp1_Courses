#include <iostream>
#include <vector>
using namespace std;

int findNthNumber(const vector<int>& arr, int X) {
    // Создаем массив для отметки присутствия ID (от 1 до 1000)
    bool present[1001] = {false};
    
    // Отмечаем каждый ID, который есть в массиве arr
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= 1 && arr[i] <= 1000) {
            present[arr[i]] = true;
        }
    }
    
    // Ищем X-й пропущенный ID
    int missingCount = 0;
    for (int i = 1; i <= 1000; i++) {
        if (!present[i]) {
            missingCount++;
            if (missingCount == X) {
                return i;  // Возвращаем X-й пропущенный ID
            }
        }
    }
    
    // Если X-го пропущенного ID нет, возвращаем -1
    return -1;
}

int main() {
    vector<int> arr;
    int num;
    
    // Считываем все числа, кроме последнего, в массив arr
    while (cin >> num) {
        arr.push_back(num);
    }
    
    // Последний элемент массива arr — это X
    int X = arr.back();
    arr.pop_back(); // Убираем X из массива arr
    
    cout << findNthNumber(arr, X) << endl;
    return 0;
}
