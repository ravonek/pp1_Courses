#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n][n];


    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    int max = arr[0][0];
    int max2 = arr[0][0];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            
            int element = arr[i][j];

            if (element > max) 
            {
                max2 = max;
                max = element;
            } else if (element > max2 && element < max) {

                max2 = element;
            }
        }
    }

    if (max2 == max) {
        cout << 0 << endl;
    } else {
        cout << max2 << endl;
    }

    return 0;
}
