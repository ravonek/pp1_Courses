#include<iostream>


using namespace std;


int main()
{
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == 0)
            {
                cout << j <<  " ";
            }
            else if(j == 0)
            {
                cout << i << " ";
            }
            else if( i == j) cout << i * j << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }




    return 0;
}