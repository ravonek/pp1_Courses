#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<string> boysQueue;

    for (int i = 0; i < n; ++i) {
        int actionType;
        cin >> actionType;

        if (actionType == 1) {
            // Add a new boy to the end of the queue
            string boyName;
            cin >> boyName;
            boysQueue.push(boyName);
        } else if (actionType == 2) {
            // First boy in queue buys a ticket and leaves
            if (!boysQueue.empty()) {
                boysQueue.pop();
            }
        }

        // Print the current first boy in the queue or indicate if empty
        if (boysQueue.empty()) {
            cout << "queue is empty" << endl;
        } else {
            cout << boysQueue.front() << endl;
        }
    }

    return 0;
}
