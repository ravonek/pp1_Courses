#include <iostream>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;

    int count = 0; // To count the number of rows containing x

    for (int i = 0; i < n; ++i) {
        bool found = false; // Flag to check if x is found in the current row
        for (int j = 0; j < m; ++j) {
            int num;
            cin >> num; // Read each number in the row
            if (num == x) {
                found = true; // Set flag if x is found
            }
        }
        if (found) {
            count++; // Increment count if x was found in the row
        }
    }

    cout << count << endl; // Output the number of rows containing x
    return 0;
}