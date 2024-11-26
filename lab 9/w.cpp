#include <iotream>
#include<algorithm>

using namespace std;
bool ispalindrome(string s)
{
    string v = s;
    reverse(s.begin(),s.end());
    if(v == s) return true;
    return false;
}

int main(){
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    do
    {
        string result = s;
        if(ispalindrome(result)){
            cout<<"ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    }while(next_permutation(s.begin(),s.end()));
    cout<<"JOJO";
}