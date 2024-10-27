#include<iostream>
#include<string>
using namespace std;

void foo(string s){

    int a = s.size();
    string s1 = "";
    for(int i = 0; i < a; i++){
        
        char c = s[i];
        if(i % 2 == 0) c = toupper(c);
        s1 += c;
    }
    cout << s1;

}

int main(){

    string s;
    cin >> s;
    foo(s);

    return 0;
}