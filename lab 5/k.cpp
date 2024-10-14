#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    if (str1.length() != str2.length()) {
        cout << "NO" << endl;
        return 0;
    }

    int count[26] = {0};

    for (char c : str1) 
    {
        count[c - 'a']++; 
    }

    for (char c : str2) 
    {
        count[c - 'a']--;
    }

    for (int i = 0; i < 26; i++) 
    {
        if (count[i] != 0) 
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
