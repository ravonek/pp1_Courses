#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;

    string result; 

    for (char c : input)
    {

        if (isalpha(c)) 
        {
            result += c;
        }
    }

    cout << result << endl; 
    return 0;
}
