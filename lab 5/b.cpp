// Problem B: 71817.Amount of capital and small
// You’re given string 
// , you need to output amount of capital and small letters in string.

// Input format
// First line contains string 
// .

// Output format
// Output answer for the problem.

// Examples
// Input
// AAbbbAAbcde
// Output
// 7 4

#include <iostream>
using namespace std;
int main () {

    string n;
    cin >> n;

    int countM = 0;
    int countN = 0;

    for (int i = 0; i< n.length (); i++) {
        if ( n [i] >= 'a' && n [i] <= 'z' ){
            countM++;
        }
        else if (n [i] >= 'A' && n [i] <= 'Z') {
            countN++;
        }
    }

    cout << countM << " " << countN;


    return 0;
}