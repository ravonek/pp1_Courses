#include<iostream>


using namespace std;


int main()
{

    int n;
    cin >> n;



    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            if(j == 0)
            {
                cout << i << " ";
            }
            if(i == 0)
            {
                cout << j << " ";
            }
            else cout << i * j << " ";
        
        }
        cout << endl;
    }

   

    return 0;
}