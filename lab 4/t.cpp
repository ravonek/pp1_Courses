#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    bool square = false;
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i < n;i++)
    {
        for(int j = 1; j < m; j++){
            if(arr[i - 1][j - 1] == arr[i][j] && arr[i-1][j] == arr[i][j] && arr[i][j-1] == arr[i][j])
            {
                    square = true;
            }
        }
    }

        if(square){
            cout << "NO";
        }
        else{
            cout << "YES";
        }

    
    return 0;
}