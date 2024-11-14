#include <iostream>
#include <string>
using namespace std;

string processBackspaces(string& str) {
    string result;
    for (char c : str) 
    {
        if (c == '#') 
        {
            if (!result.empty()) result.pop_back();
            
        } 
        else result.push_back(c);
           
    }
    return result;
}

int main() 
{
    string S, T;
    cin >> S >> T;

    string processedS = processBackspaces(S);
    string processedT = processBackspaces(T);

    if (processedS == processedT)  cout << "True" << endl;
    else  cout << "False" << endl;
       

    return 0;
}
