#include<iostream>
using namespace std;

void foo(int a){

    bool isvalid = true;
    while(a > 0){
       int b = a % 10;
       if(b % 2 != 0) {
        isvalid = false;
        break;
    }
    a /= 10;
}
isvalid ? cout <<"Valid" : cout << "Not valid";
}




int main(){

    int a;
    cin >> a;
    foo(a);


    return 0;
}