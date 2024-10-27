#include <iostream>
using namespace std;

void foo(int raw, int col) {
    int arr[raw][col];
    for (int i = 0; i < raw; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < raw; j++) {
            cout << arr[j][i] << " ";

        }
        cout << endl;
    }
}

int main() {
    int raw, col;
    cin >> raw >> col;
    foo(raw, col);
    return 0;
}
