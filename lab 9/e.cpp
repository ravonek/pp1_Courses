#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Comparator function
bool compareRows(const vector<int>& row1, const vector<int>& row2) {
    int sum1 = 0, sum2 = 0;

    // Calculate sum of the rows
    for (int i = 0; i < row1.size(); i++) sum1 += row1[i];
    for (int i = 0; i < row2.size(); i++) sum2 += row2[i];

    // Compare by sum of elements
    if (sum1 != sum2) return sum1 < sum2;

    // If sums are equal, compare by size of the rows
    if (row1.size() != row2.size()) return row1.size() < row2.size();

    // If size is also equal, compare lexicographically element by element
    for (int i = 0; i < row1.size(); i++) {
        if (row1[i] != row2[i]) {
            return row1[i] < row2[i];
        }
    }

    // If everything is equal, return true
    return false;
}

int main() {
    int N;
    cin >> N;  // Number of rows

    vector<vector<int> > matrix;

    // Input each row
    for (int i = 0; i < N; i++) {
        int M;
        cin >> M;  // Size of the row
        vector<int> row(M);

        for (int j = 0; j < M; j++) {
            cin >> row[j];
        }

        matrix[i] = row;
    }

    // Sort the rows using the comparator
    sort(matrix.begin(), matrix.end(), compareRows);

    // Output the sorted matrix
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
