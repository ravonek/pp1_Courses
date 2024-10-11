#include <iostream>
using namespace std;

int main() {
    int n, m, count;
    cin >> n >> m;
    char arr[n][m]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = '.';
        }
    }
    cin >> count;
    for (int i = 0; i < count; i++) {
        int x, y;
        cin >> x >> y;
        arr[x][y] = '*'; 
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == '*') continue; 
            int mineCount = 0;
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    int nx = i + dx;
                    int ny = j + dy;
                    if (nx >= 0 && ny >= 0 && nx < n && ny < m && arr[nx][ny] == '*') {
                        mineCount++;
                    }
                }
            }
            if (mineCount > 0) {
                arr[i][j] = mineCount + '0';
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}