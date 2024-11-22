#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Calculate the total size of the sequence
    int total_size = (N * (N + 1)) / 2;

    // Create a vector of the required size
    vector<int> sequence(total_size);

    // Fill the vector with the sequence
    int pos = 0; // Tracks the current position in the vector
    for (int i = 1; i <= N; ++i) {
        fill(sequence.begin() + pos, sequence.begin() + pos + i, i);
        pos += i; // Move the position forward by i
    }

    // Output the sequence
    for (int i = 0; i < total_size; ++i) {
        cout << sequence[i] << " ";
    }

    return 0;
}
