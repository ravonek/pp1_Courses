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
        frequency[num]++; // Insert number into the map
    }

    // The largest key in the map is the maximum value
    cout << frequency.rbegin()->first << endl;

    return 0;
}
