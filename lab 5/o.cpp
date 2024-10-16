#include<iostream>
#include<string>
using namespace std;

int main (){

    string s;
    int ot;
    int con;
    cin >> s >> ot >> con;
    int a = s.size();

    for (int i =ot; i <= con; i++){

        cout << s[i];
    }

    return 0;
}