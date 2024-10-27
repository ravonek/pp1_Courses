#include<iostream>
using namespace std;

void foo(int a){

    int sum = 0;
    while(a > 0){
        int b = a % 10;
        sum += b;
        a /= 10;
    }
    cout << sum;
}


int main(){

    int a;
    cin >> a;
    foo(a);
    return 0;
}