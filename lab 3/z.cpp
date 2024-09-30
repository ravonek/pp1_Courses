 #include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxGCD = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int a = arr[i];
            int b = arr[j];

            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
                
            }
            if (a > maxGCD) {
                maxGCD = a;
            }
        }
    }

    cout << maxGCD << endl;
    return 0;
}
