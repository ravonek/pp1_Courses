#include<iostream>
#include<algorithm>

using namespace std;


int main()
{

    int n;
    cin >> n;

    int arr1[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int arr2[m];
    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }


    int size = n + m;
    int arr3[size];

    for(int i = 0; i < size; i++)
    {
        if(i < n) arr3[i] = arr1[i];
        else arr3[i] = arr2[i - n];
    }

    sort(arr3 , arr3 + size);
    

    for(int i = 0; i < size; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}