#include <iostream>
#include <string>
#include <cctype>
#include<sstream>

using namespace std;

int main() 
{
    string sentence;
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;
    int counts[26] = {0}; 
    
    while (ss >> word)
    {
        if (isalpha(word[0])) 
        {
                char c = tolower(word[0]); // Преобразуем в нижний регистр
                counts[c - 'a']++;
            }


    }

    for (int i = 0; i < 26; ++i) 
    {
        cout << counts[i] << endl;
    }
   

    

    return 0;
}
