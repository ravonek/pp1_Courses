#include<iostream>
#include<cstdlib>
using namespace std;

void foo(int a){

    int num = a;
    if ( a < 0) a = abs(a);
    cout << a;
}

int main(){

    int a;
    cin >> a;
    foo(a);

    return 0;
}