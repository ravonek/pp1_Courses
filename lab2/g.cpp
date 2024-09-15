#include<iostream>
#include<cmath>


using namespace std;


int main()
{
    double a, b;
    cin >> a >> b;
    
    int c;
    
    if(a / b == 2)
    {
        c = 2;
    }
    else
    {
        c = ceil ((a * 2) / b);
    }
    cout << c;

    return 0;
}