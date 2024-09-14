#include<iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int cnt = 0;


    while(n > 0)
    {
        if(n % 2 == 1) cnt++;
        n /= 2;    
    }

    //solution using for 

    for(int i = n; i > 0; i /= 2)
    {
        if(n % 2 == 1) cnt++;
    }


    cout << cnt;


    return 0;
}