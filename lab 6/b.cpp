#include<iostream>
#include<cmath>

using namespace std;

void dif(int arr[], int arr2[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << abs(arr[i] - arr2[i]) << " ";
    }
}

int main()
{
    int size;
    cin >> size;

    int arr[size], arr2[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cin >> arr2[i];
    }

    dif(arr, arr2, size);



    return 0;
}