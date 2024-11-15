#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numbers;
    int num;

    // Read the input into the vector
    while (cin >> num) {
        numbers.push_back(num);
    }

    int nonZeroIndex = 0;

    // Move non-zero elements to the front
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] != 0) {
            numbers[nonZeroIndex++] = numbers[i];
        }
    }

    // Fill the remaining positions with zeros
    while (nonZeroIndex < numbers.size()) {
        numbers[nonZeroIndex++] = 0;
    }

    // Output the result
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }

    return 0;
}
