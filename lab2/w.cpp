#include <iostream> 
#include <algorithm> 

using namespace std; 
int main(){ 
    int n; 
    cin>>n; 

    string s = ""; 

    while(n > 0){ 
        s += to_string(n % 2); 
        n /= 2; 
    } 
    for(int i = 0; i < s.length(); i++)
    { 
        if(s[i] == '1'){ 
            cout << i; 
            return 0; 
        } 
    } 
}