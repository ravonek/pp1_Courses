#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n == 1) cout << "NO";
    else
    {
        bool isPrime = true;

        for(int i = 2; i < n; i++)
        {
            if(n % i == 0)
            {
                isPrime = false;
                break;

            }
        }

        isPrime ? cout << "YES" : cout << "NO";
    }

    return 0;
}