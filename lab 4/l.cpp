#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    
    int a[n][m];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int minsumrow = 0;
    int minsum = 0;
    
    for (int j = 0; j < m; j++) {
        minsum += a[0][j];
    }

    for (int i = 1; i < n; i++) {
        int rowsum = 0;
        for (int j = 0; j < m; j++) {
            rowsum += a[i][j];
        }
        if (rowsum < minsum) {
            minsum = rowsum;
            minsumrow = i;
        }
    }

    cout << minsumrow + 1 << endl;

    return 0;
}
