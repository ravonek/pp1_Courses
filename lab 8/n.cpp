#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    int A[n];
    unordered_set<int> elementsSet;
    
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
        elementsSet.insert(A[i]);
    }

    int count = 0;
    // Check all pairs (i, j) where i < j
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int xorValue = A[i] ^ A[j];
            // If xorValue is in the array, count this pair
            if (elementsSet.count(xorValue)) {
                ++count;
            }
        }
    }

    cout << count << endl;
    return 0;
}
