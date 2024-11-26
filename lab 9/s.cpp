#include <iostream>
#include<algorithm>
#include<stack>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        v.push_back(a)
    }
    sort(v.begin(),v.end());

    vector<int> uniques;
    uniques.push_back(v[0]);

    for(int i=1; i<v.size(); i++)
    {
        if(v.at(i) != v.at(i - 1))
        {
            uniques.push_back(v.at(i));
        }
    }
    
    do
    {
        for(int i=0;i<uniques.size(); i++)
        {
            cout<<uniques.at(i)<<" ";
        }
        cout<<endl;
    } while (next_permutation(uniques.begin(), uniques.end()));
    

}