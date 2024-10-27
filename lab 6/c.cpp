#include <iostream>
#include<algorithm>
using namespace std;

void print(int a);

void foo(int n, int arr[], int arr1[]) {
    int counter = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    sort(arr,arr + n);
    sort(arr1,arr1 + n);
    int lastfound = 0;


  
    for (int i = 0; i < n; i++) {
        for (int j = lastfound; j < n; j++) {
            if (arr[i] == arr1[j]) {

                lastfound = j+1;
                counter++;
                break;
                
            }
            }
    }
      

    print(counter);
}

void print(int a) {
    cout << a;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    int arr1[n];

    foo(n, arr, arr1);

    return 0;
}