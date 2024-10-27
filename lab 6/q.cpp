#include<iostream>
#include<iomanip>
using namespace std;

void foo(double a, double b){

    double percent = (b * 100) / a;
    cout  << setprecision(6) << percent;
}

int main(){

    double a, b;
    cin >> a >> b;
    foo(a, b);
    return 0;
}