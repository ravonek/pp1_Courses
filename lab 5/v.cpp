#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string s;
    getline(cin, s);

    string result;

    for (char c : s) 
    {
        if (isalpha(c)) 
        {
            if (c == 'z') 
            {
                result += 'a';
            } else if (c == 'Z') 
            {
                result += 'A';
            } else 
            {
                result += c + 1;
            }
        } else 
        {
            result += c;
        }
    }

    cout << result << endl;

    return 0;
}
