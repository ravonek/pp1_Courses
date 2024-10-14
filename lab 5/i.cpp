#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string dish;
    getline(cin, dish); 
    
    int sum = 0;
    for (char c : dish) {
        sum += int(c);
    }
    
    if (sum > 300) {
        cout << "It is tasty!" << endl;
    } else {
        cout << "Oh, no!" << endl;
    }

    return 0;
}
