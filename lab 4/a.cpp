#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n * m];  
    int b[n][m];   


    for (int i = 0; i < n * m; i++) {
        cin >> a[i];
    }

    sort(a, a + n * m);

    int left = 0;           
    int right = n * m - 1;   

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i * m + j) % 2 == 0) {
                b[i][j] = a[right];  
                right--;
            } else {
                b[i][j] = a[left];   
                left++;
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
