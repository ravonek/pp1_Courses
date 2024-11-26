#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the number of elements
    vector<int> nums(n);
    
    // Reading the list of integers
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    map<int, int> freq_map;

    // Count the frequencies of each number
    for (int i = 0; i < n; ++i) {
        freq_map[nums[i]]++;
    }

    int most_frequent = nums[0];
    int highest_frequency = freq_map[most_frequent];

    // Find the number with the highest frequency and the smallest if there are ties
    for (auto& entry : freq_map) {
        if (entry.second > highest_frequency || (entry.second == highest_frequency && entry.first < most_frequent)) {
            most_frequent = entry.first;
            highest_frequency = entry.second;
        }
    }

    // Output the most frequent element
    cout << most_frequent << endl;

    return 0;
}
