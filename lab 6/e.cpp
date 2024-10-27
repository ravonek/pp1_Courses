#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double num(int a, int b){
    
    double c = sqrt(pow(a,2) + pow(b,2));
    return c;

}
    

int main () {

    int a, b;
    cin >> a >> b;
    cout <<setprecision(4) << num (a, b);




return 0;
}