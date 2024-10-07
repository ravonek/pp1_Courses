#include<iostream>


using namespace std;



int main()
{

    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> arr[i][j];
        }
    }

    int sum = 0;

    
    cout << "coordinates of min elements: " << endl;
    
    for (int j = 0; j < m; j++) 
    {
        int min = arr[0][j];
        int posX = 0;
        int posY = j;
        for (int i = 0; i < n; i++)
        {
         if(arr[i][j] < min) 
         {
            min = arr[i][j];
            posX = i;
            posY = j;
         }   
        }
        cout << posX + 1 << ';' << posY + 1 << endl;
        sum += min;

    }

    cout << endl;
    cout << "Their sum:" << endl;
    cout << sum;

    return 0;
}