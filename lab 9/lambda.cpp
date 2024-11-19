#include<iostream>
#include<cmath>

using namespace std;


int rec(string s, int i = 0)
{

    if(i == s.size()) return 0;

    else 
    {
        char c = s[i];
        int digit = s[i] - '0';
        return digit + rec(s, i + 1);
    
    }  
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cin >> x;

    bool isFound = rec(n, arr, x);


    isFound ? cout << "Yes" : cout << "No";


    return 0;
}