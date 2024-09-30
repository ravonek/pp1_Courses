#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;
    int arr[size];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int maxCount = 0;
    int mode;

    for(int i = 0; i < size; i++) {
        int count = 0;
        for(int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        } else if (count == maxCount && arr[i] > mode) {
            mode = arr[i];
        }
    }

    cout << mode << endl;

    return 0;
}
