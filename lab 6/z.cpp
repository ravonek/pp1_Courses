#include <iostream>

using namespace std;

string strToBool(string str){

    for( int i = 0; i < str.length(); i++){
        if (str == "1" ){
            return "true";
        }
        else if( str == "0"){
            return "false";
        }
        else{return str;}
    }
    
 }

int main (){

    string str;
    cin >> str;
    cout<<strToBool(str);

 }