#include<iostream>

using namespace std;



int main()
{

    double overall ,attended;
    cin >> overall >> attended;


    if(attended / overall * 100 >= 80) cout << "YES";
    else cout << "NO";  


    return 0;
}