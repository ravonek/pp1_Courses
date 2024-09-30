#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    k = k % size; 
    if (k < 0) {
        k += size; 
    }

    int temp[size];

    for (int i = 0; i < size; i++) {
        temp[(i + k) % size] = arr[i];
    }

    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
