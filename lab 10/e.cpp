#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the size of the array

    vector<int> arr(n);

    // Read the array elements
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    map<int, int> frequency;

    // Count the frequency of each element
    for (int num : arr) {
        frequency[num]++;
    }

    // Find the maximum frequency
    int max_freq = 0;
    for (map<int, int>::iterator it = frequency.begin(); it != frequency.end(); ++it) {
        if (it->second > max_freq) {
            max_freq = it->second;
        }
    }

    // Check if the most frequent element can fit within the constraints
    if (max_freq <= (n + 1) / 2) {
        cout << "Possible" << endl;
    } else {
        cout << "Impossible" << endl;
    }

    return 0;
}
