#include <iostream>
#include <cmath>

using namespace std;

int calculateAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum / n; 
}

int calculateDifference(int togzhanNOC, int avgNOC) {
    return abs(togzhanNOC - avgNOC); 
}

int main() {
    int n, togzhanNOC;
    cin >> n >> togzhanNOC;

    int studentNOCs[n];
    for (int i = 0; i < n; ++i) {
        cin >> studentNOCs[i];
    }

    int avgNOC = calculateAverage(studentNOCs, n);
    int difference = calculateDifference(togzhanNOC, avgNOC);

    cout << difference << endl;

    return 0;
}
