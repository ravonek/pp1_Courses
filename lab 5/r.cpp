#include<iostream>
#include<algorithm>

using namespace std;


int main()
{

    string s;
    cin >> s;
    
    char c;
    cin >> c;

    int pos = 0;
    for(int i = 0; i < s.size();i++)
    {
        if(s[i] == c) 
        {
            pos = i;
            break;
        }
    }

    int pos2 = 0;

     for(int i = s.size() - 1; i >=  0;i--)
    {
        if(s[i] == c) 
        {
            pos2 = i;
            break;
        }
    }

    if(pos == pos2) cout << pos;
    else
    {
        cout << pos << " " << pos2;
    }

    return 0;
}