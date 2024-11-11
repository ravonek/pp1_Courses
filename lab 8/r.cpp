#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> prices(n);
    
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    
    for (int i = 0; i < n; i++) {
        bool foundDiscount = false;
        for (int j = i + 1; j < n; j++) {
            if (prices[j] <= prices[i]) {
                prices[i] -= prices[j];
                foundDiscount = true;
                break;
            }
        }
        // If no discount was found, the price stays the same
    }

    for (int i = 0; i < n; i++) {
        cout << prices[i] << " ";
    }
    
    return 0;
}
