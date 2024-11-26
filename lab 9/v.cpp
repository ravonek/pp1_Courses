#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<char> anagram;
    for(int i=0; i<s.size();i++){
        anagram.push_back(s[i]);
    }
    sort(anagram.begin(),anagram.end());
    cout<<"The anagram variants for string " << s << " are:" << endl;
    do{
        for(int i=0; i< anagram.size(); i++){
            cout<<anagram[i];

        }
        cout<<endl;
    }
    while(next_permutation(anagram.begin(),anagram.end()));
}