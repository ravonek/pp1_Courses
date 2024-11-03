#include<iostream>
#include<set>

using namespace std;

int main()
{

    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        s.insert(element);
    }
    
    if(s.size() == n) cout << "Yes";
    else cout << "No";
 
    return 0;

}