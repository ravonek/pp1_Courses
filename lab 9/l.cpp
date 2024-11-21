#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

// Function to check if a number is prime according to the modified definition
bool is_prime(int x) {
    int abs_x = abs(x);
    if (abs_x <= 1) return false; // Numbers <= 1 (including 0) are not prime
    for (int i = 2; i <= sqrt(abs_x); ++i) {
        if (abs_x % i == 0) return false; // Check divisors
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Count numbers that are prime using count_if and is_prime
    int prime_count = count_if(arr, arr + N, is_prime);

    cout << prime_count << endl;

    return 0;
}
