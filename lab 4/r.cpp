#include <iostream>  
#include<cmath>


using namespace std; 
 
int main() 
{ 
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




     for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                int a = sqrt(arr[i][j]);

                if(a * a == arr[i][j]) 
                {
                   arr[i][j] = a;
                   cout  << a << " ";

                }
                else cout << arr[i][j] << " ";
                
            }
            cout << endl;
        }


     
 
 
    return 0; 
}