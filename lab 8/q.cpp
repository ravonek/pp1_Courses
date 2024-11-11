#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int minutes;
    cin >> minutes;

    stack<int> candyStack;
    vector<int> soldCandies;

    for (int i = 0; i < minutes; i++) {
        int event;
        cin >> event;

        if (event > 0) {
            // Добавляем коробку с конфетами на стек
            candyStack.push(event);
        } else if (event == 0 && !candyStack.empty()) {
            // Продаем коробку с верхней части стека
            soldCandies.push_back(candyStack.top());
            candyStack.pop();
        }
    }

    if (soldCandies.empty()) {
        cout << -1 << endl;
    } else {
        for (int i = 0 ; i < soldCandies.size(); i++) 
        {
            cout << soldCandies.at(i) << " ";
        }
        cout << endl;
    }

    return 0;
}
