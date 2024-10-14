#include<iostream>

using namespace std;


int main()
{
    int n;
    cin >> n;

    string s = "";

    while(n > 0)
    {
        int remainder = n % 16;
        if(remainder < 10)
        {
            s = char(remainder + '0') + s;
        }
        else
        {
            s = char(remainder - 10 + 'A') + s;
        }
        n /= 16;
    }

    cout << s;

}
