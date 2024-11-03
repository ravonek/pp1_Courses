#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int L, R;
        cin >> L >> R;

        int visibleCount = 0;
        int maxHeight = 0;

        for (int j = L; j <= R; ++j) {
            if (heights[j] > maxHeight) {
                visibleCount++;
                maxHeight = heights[j];
            }
        }

        cout << visibleCount << endl;
    }

    return 0;
}
