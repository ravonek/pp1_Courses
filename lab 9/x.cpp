#include <iostream>
#include<algorithm>

using namespace std; 
int main()
{ 
    string s; 
    cin >> s; 
    sort(s.begin(),s.end()); 
    reverse(s.begin(),s.end()); 
    string answer = ""; 
    do
    { 
        for(int i=0;i<s.size();i++)
        { 
            answer += s[i]; 
        } 
    } 
    while(prev_permutation(s.begin(),s.end())); 
    cout << answer; 
     
}