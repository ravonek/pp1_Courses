#include <iostream>
#include <vector>
using namespace std;

void calculateA(int i, int n, const vector<int>& k, vector<int>& a) {
    if (i == n) return;
    a[i] = k[i] | (k[i] + 1);
    calculateA(i + 1, n, k, a);
}

void calculateB(int i, int n, const vector<int>& k, vector<int>& b) {
    if (i == n) return;
    b[i] = k[i] & (k[i] + 2);
    calculateB(i + 1, n, k, b);
}

void calculateC(int i, int n, const vector<int>& k, vector<int>& c) {
    if (i == n) return;
    c[i] = k[i] ^ (k[i] + 3);
    calculateC(i + 1, n, k, c);
}

void printArray(int i, int n, const vector<int>& arr) {
    if (i == n) {
        cout << endl;
        return;
    }
    cout << arr[i] << " ";
    printArray(i + 1, n, arr);
}

void encryptData(int n, const vector<int>& k) {
    vector<int> a(n), b(n), c(n);
    calculateA(0, n, k, a);
    calculateB(0, n, k, b);
    calculateC(0, n, k, c);
    printArray(0, n, a);
    printArray(0, n, b);
    printArray(0, n, c);
}

int main() {
    int n;
    cin >> n;
    vector<int> k(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    encryptData(n, k);
    return 0;
}
