#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> stk;

    for (char ch : s) 
    {
        if (!stk.empty() && stk.top() == '1' && ch == '1') 
        {
            stk.pop();  // Удаляем предыдущую единицу
        } else 
        {
            stk.push(ch);  // Добавляем текущий символ в стек
        }
    }

    // Выводим содержимое стека как строку
    string result;
    while (!stk.empty()) 
    {
        result = stk.top() + result;
        stk.pop();
    }

    cout << result << endl;
    return 0;
}
