#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;  

    
    for (int i = 0; i < n.length(); i++) {
        
        if (n[i] >= 'a' && n[i] <= 'z') {
            // cout << char(n[i] - 32); 
            cout << char(toupper(n[i])); 
        } else {
            cout << n[i];  
        }
    }

    cout << endl;  
    return 0;
}