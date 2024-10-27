#include<iostream>
using namespace std;

void foo(int arr[], int size){


    // size = 4;
    // arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
int max = arr[0];
for(int i = 0; i < size; i++){
if (arr[i] > max) max = arr[i];
}
cout << max;
}


int main(){

    int size = 4;
    int arr[4];
    foo(arr, size);

    return 0;
}