#include<iostream>

using namespace std;


int main()
{  

    int midterm, endterm, final;

    cin >> midterm >> endterm >> final;

    if(midterm + endterm >= 30 && final >= 20 && midterm + endterm + final >= 70)
    {
        cout << "YES!";
    }
    else cout << "NO.";


    return 0;
}