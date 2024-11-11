#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    int strength;
    stack<int> battlefield;  // Стек для отслеживания магов на поле боя
    
    for (int i = 0; i < n; ++i) {
        cin >> strength;
        
        // Удаляем магов с силой, меньшей или равной текущему магу
        while (!battlefield.empty() && battlefield.top() <= strength) {
            battlefield.pop();
        }
        
        // Добавляем силу текущего мага на поле боя
        battlefield.push(strength);
        
        // Выводим количество магов на поле после его присоединения
        cout << battlefield.size() << " ";
    }
    
    cout << endl;
    return 0;
}
