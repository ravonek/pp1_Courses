#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    
    for (int i = 0; i < n; ++i) {
        int sku;
        cin >> sku;
        actualSum += sku;
    }

    int missingSku = expectedSum - actualSum;
    cout << missingSku << endl;

    return 0;
}
