#include<iostream>
using namespace std;

void foo(int a){

    int sum = 0;
    int b;
    int d = a % 10;
    while(a > 0){

        b = a % 10;
        sum += b;
        a /= 10;
        
    }   
        sum % d == 0 ? cout << "Yes" : cout << "No";
}


int main(){

    int a;
    cin >> a;
    foo(a);
    
    return 0;
    
}