#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of elements in the list

    map<int, int> frequency; // Map to store the numbers (keys) and their counts (values)
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        frequency[num]++; // Insert number into the map or increment its count
    }

    // Check if we have at least 2 unique elements
    if (frequency.size() < 2) {
        cout << 0 << endl;
        return 0;
    }

    // Find the second maximum
    auto it = frequency.rbegin(); // Iterator to the largest element
    ++it; // Move to the second largest element

    // Output the frequency of the second maximum
    cout << it->second << endl;

    return 0;
}
