#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> stk;

    for (char ch : s) {
        if (ch == '(') {
            stk.push(ch);  // Добавляем открывающую скобку в стек
        } else if (ch == ')') {
            if (stk.empty()) {
                cout << "NO" << endl;
                return 0;  // Если стек пуст, то последовательность некорректна
            }
            stk.pop();  // Убираем соответствующую открывающую скобку из стека
        }
    }

    // Если стек пуст в конце, последовательность корректна
    if (stk.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;  // Если остались открывающие скобки, последовательность некорректна
    }

    return 0;
}
