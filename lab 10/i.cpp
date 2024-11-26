#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of elements in the list

    set<int> numbers; // Set to store unique numbers (sorted automatically)
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        numbers.insert(num); // Insert each number into the set
    }

    // The smallest element in the set is the minimum
    cout << *numbers.begin() << endl;

    return 0;
}
