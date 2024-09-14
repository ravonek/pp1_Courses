#include<iostream>
#include<cmath>


using namespace std;


int main()
{

    int n;
    cin >> n;

    
    for(int i = 0; i < n; i++){

        int power = pow(2, i);
        if(power == n)
        {
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";

    return 0;
}