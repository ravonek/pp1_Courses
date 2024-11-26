#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of elements in the list

    map<int, int> frequency; // Map to store frequency of each number
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        frequency[num]++;
    }

    // Find the second minimum
    if (frequency.size() < 2) {
        // If there are fewer than 2 unique elements, no valid second minimum
        cout << 0 << endl;
        return 0;
    }

    // Use an iterator to find the second smallest key in the map
    map<int, int>::iterator it = frequency.begin();
    ++it; // Advance to the second element

    // Output the frequency of the second minimum
    cout << it->second << endl;

    return 0;
}
