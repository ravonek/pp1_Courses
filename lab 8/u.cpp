#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int q;
    cin >> q;
    
    stack<int> mainStack;
    stack<int> maxStack;

    while (q--) {
        string command;
        cin >> command;
        
        if (command == "add") {
            int x;
            cin >> x;
            mainStack.push(x);

            // Update maxStack
            if (maxStack.empty() || x >= maxStack.top()) {
                maxStack.push(x);
            } else {
                maxStack.push(maxStack.top());
            }
        } 
        else if (command == "delete") {
            if (!mainStack.empty()) {
                mainStack.pop();
                maxStack.pop();
            }
        } 
        else if (command == "getcur") {
            if (mainStack.empty()) {
                cout << "error" << endl;
            } else {
                cout << mainStack.top() << endl;
            }
        } 
        else if (command == "getmax") {
            if (maxStack.empty()) {
                cout << "error" << endl;
            } else {
                cout << maxStack.top() << endl;
            }
        }
    }


    return 0;
}
