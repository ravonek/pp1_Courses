#include<iostream>


using namespace std;

int main()
{
    int n;

    cin >> n;

    int temp = n;

    int reversed = 0;


    while(temp > 0)
    {
        int digit = temp % 10;
        reversed = reversed * 10 + digit;
        temp /= 10;
    }


    if( reversed == n) cout << "YES";
    else cout << "NO";



    return 0;
}