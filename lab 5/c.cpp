// Input
// aaa a 3
// Output
// YES
// Input
// abcde e 1
// Output
// YES


#include<iostream>

using namespace std;

int main()
{

    string s;
    cin >> s;

    char c;
    cin >> c;

    int n;
    cin >> n;

    int cnt = 0;

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == c)cnt++;
    }

    cnt == n ? cout << "YES" : cout << "NO";



    return 0;
}