#include<iostream>
#include<algorithm>
using namespace std;

void foo(int arr[], int size){

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    reverse(arr, arr + size);

    for (int i = 0; i < size; i++){

        cout << arr[i] << " ";
    }
}


int main(){

    int n;
    cin >> n;
    int arr[n];
    foo(arr, n);

    return 0;
}