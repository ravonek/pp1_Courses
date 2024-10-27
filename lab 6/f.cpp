#include<iostream>
using namespace std;

void foo(int a, string s){
    int counter = 0;
    
    for ( int i = 0; i < s.size(); i++){
        char c = s[i];
        int a = s[i] - '0';
        if ( c >= '0' && c <= '9'){
            counter++;
        }

    }
    counter >= a ? cout << "YES" : cout << "NO";
}
int main(){

    string s;
    cin >> s;
    int a;
    cin >> a;
    foo(a,s);
}