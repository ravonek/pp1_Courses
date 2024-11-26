#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;  // Read the size of the array (N x N)

    int arr[N][N];  // 2D array to store the input
    
    // Reading the 2D array from input
    for (int i = 0; i < N; ++i) 
    {
        for (int j = 0; j < N; ++j) 
        {
            cin >> arr[i][j];
        }
    }

    // Processing each row
    for (int i = 0; i < N; ++i) 
    {
        int firstElement = arr[i][0];  // The first element of the row
        int count = 0;

        // Count how many elements are greater than the first element in this row
        for (int j = 1; j < N; ++j) {
            if (arr[i][j] > firstElement) {
                ++count;
            }
        }

        // Output the result for this row
        cout << count << endl;
    }


    return 0;
}
