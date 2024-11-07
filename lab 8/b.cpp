#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    vector<int> even, odd;
    
    // Разделяем четные и нечетные числа
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            even.push_back(arr[i]);
        } else {
            odd.push_back(arr[i]);
        }
    }
    
    // Сортируем четные числа по убыванию
    sort(even.begin(), even.end(), greater<int>());
    // Сортируем нечетные числа по возрастанию
    sort(odd.begin(), odd.end());
    
    // Выводим четные числа
    for (int i = 0; i < even.size(); ++i) {
        cout << even[i] << " ";
    }
    // Выводим нечетные числа
    for (int i = 0; i < odd.size(); ++i) {
        cout << odd[i] << " ";
    }
    
    return 0;
}