#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true; // 2 is prime
    if (num % 2 == 0) return false; // even numbers greater than 2 are not prime
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    unordered_map<int, int> freq;
    vector<int> numbers;
    int num;

    // Read input
    while (cin >> num) {
        numbers.push_back(num);
        freq[num]++;
    }

    vector<int> result;

    // Collect numbers that are not prime and appear more than once
    for (const auto& entry : freq) {
        if (!isPrime(entry.first) && entry.second > 1) {
            result.push_back(entry.first);
        }
    }

    // Sort the result
    sort(result.begin(), result.end());

    // Output the result
    for (int n : result) {
        cout << n << " ";
    }

    return 0;
}
