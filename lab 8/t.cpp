#include <iostream>
#include <deque>
#include <climits>
#include <stack>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
   
    for (int i = 0; i < n; i++)
    {
        long long temp;
        string s;
        cin >> temp;
        while (temp!=0)
        {
            s = to_string(temp%2) + s;
            temp /=2;
        }
       
        for (int j = 0; !s.empty() && j < s.length()-1;)
        {
            if (s[j] == '1' && s[j+1]== '0'){
                s.erase(j,2);
                j = 0;
            } else j++;
        }
        if (s.empty()){
            cout << "YES" << endl;
        } else cout << "NO" << endl;
        
    }
    
    
    return 0;
}
