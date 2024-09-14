#include<iostream>


using namespace std;


int main()
{
    int a, b, c;
    int costA, costB, costC;
    int dengi;

    cin >> a >> b >> c >> costA >> costB >> costC >> dengi;

    int sum =  a*costA + b*costB + c*costC;

    if(sum <= dengi) cout << "Yes";
    else cout << "No";

    return 0;

}
