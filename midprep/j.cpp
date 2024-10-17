
#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int N, M;
    cin >> N >> M;

    // Initialize the matrix with 'X'
    char matrix[100][100];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            matrix[i][j] = 'X';
        }
    }

    // Initial position of the drone
    int x = 0, y = 0;
    matrix[x][y] = '*'; // Mark the starting position

    // Process the movement commands
    for (char move : S) {
        if (move == 'U') x--;
        else if (move == 'D') x++;
        else if (move == 'L') y--;
        else if (move == 'R') y++;

        // Mark the position if within bounds
        if (x >= 0 && x < N && y >= 0 && y < M) {
            matrix[x][y] = '*';
        }
    }

    // Output the matrix
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << matrix[i][j];
        }
        cout << endl;
    }

    return 0;
}