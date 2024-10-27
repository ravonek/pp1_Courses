#include<iostream>
#include<string>
using namespace std;

void foo(char c){

if ( c >= 'a' && c <= 'z') c = toupper(c);
cout << c;
}


int main(){

    char c;
    cin >> c;
    foo(c);

    return 0;
}