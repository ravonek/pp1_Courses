#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    // Reverse the array first
    reverse(arr, arr + N);

    // Rotate the array back by N - M positions
    rotate(arr, arr + (N - M), arr + N);

    // Print the restored sequence
    for (int i = 0; i < N; ++i) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
