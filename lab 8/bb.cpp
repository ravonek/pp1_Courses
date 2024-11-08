#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    vector<int> odds;
    vector<int> evens;

    for (int i = 0; i < n; i++)
    {
        if(v.at(i) % 2 == 0) evens.push_back(v.at(i));
        else odds.push_back(v.at(i));
    }

    sort(evens.begin(), evens.end());
    reverse(evens.begin(), evens.end());

    sort(odds.begin(), odds.end());


    for (int i = 0; i < evens.size(); i++)
    {
       cout << evens.at(i) << " ";
    }


    for (int i = 0; i < odds.size(); i++)
    {
       cout << odds.at(i) << " ";
    }

    
    return 0;
}
