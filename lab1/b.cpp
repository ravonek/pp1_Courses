#include <iostream>


using namespace std;


int main() {


    int age, number2;


    cin >> age >> number2;


    int div = number2 % 10;


    int div2 = number2 / 100;


    int sum = div + div2;


    int sum2 = age + sum; 




    cout << sum2;

    






    return 0;
}