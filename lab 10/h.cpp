#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n;  // Number of banknotes
    cin >> n;
    
    unordered_map<int, int> banknoteCount;
    
    // Read the banknote values and count their occurrences
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        banknoteCount[value]++;
    }
    
    int q;  // Number of queries
    cin >> q;
    
    // For each query, output the count of banknotes with the queried value
    for (int i = 0; i < q; ++i) {
        int queryValue;
        cin >> queryValue;
        cout << banknoteCount[queryValue] << endl;  // Output the count or 0 if not found
    }
    
    return 0;
}
