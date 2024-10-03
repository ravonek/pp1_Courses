#include<iostream>


using namespace std;

int main()
{

    string s;
    cin >> s;

    int digit = s[0] - '0'; 
    int a1 = stoi(s);

    int sum = 0;


    while(a1 > 0)
    {
        int ost = a1 % 10;
        sum += ost;
        a1 /= 10;
    }

    sum -= digit;


    sum % 10 == digit ? cout << "YES" : cout << "NO";




    return 0;
}