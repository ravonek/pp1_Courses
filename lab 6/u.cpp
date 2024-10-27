#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findMaxGCD(int arr[], int n) {
    int maxGCD = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int currentGCD = gcd(arr[i], arr[j]);
            if (currentGCD > maxGCD) {
                maxGCD = currentGCD;
            }
        }
    }
    
    return maxGCD;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = findMaxGCD(arr, n);
    cout << result << endl;

    return 0;
}
