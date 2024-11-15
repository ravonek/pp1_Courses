#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    vector<string> items;
    string item;
    
    // Read all the items
    while (cin >> item) {
        items.push_back(item);
    }

    unordered_set<string> purchasedItems; // Set to track purchased items
    bool isAidaTurn = true; // Aida starts first
    
    // Process each item
    for (const string& item : items) {
        if (purchasedItems.find(item) == purchasedItems.end()) { // If item is not bought yet
            if (isAidaTurn) {
                cout << "Aida" << endl;
            } else {
                cout << "Aizhan" << endl;
            }
            cout << item << endl;
            purchasedItems.insert(item); // Mark item as purchased
            isAidaTurn = !isAidaTurn; // Alternate turns
        }
    }

    return 0;
}
