#include<iostream>

using namespace std;

int main()
{
    int rabbits, days;
    cin >> rabbits >> days;

    int overall = 0;

    for(int i = 1; i <= days; i++)
    {
        if(i == 1) overall += rabbits;
        else
        {
            int quantity = 2 * i * rabbits;
            overall += quantity;
        }
    }
    
    cout << overall;


    return 0;
}