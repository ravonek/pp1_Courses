#include <iostream>
#include<algorithm>
#include<stack>
#include<string>


using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else{
            string num = "";
            num +=st.top();
            num +=s[i];
            int numd = stoi(num);
            if(sqrt(numd)==(int)sqrt(numd)){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }
    if(st.empty()){
        cout<<"Stack is empty";
    }
    else{
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
    }
    return 0;
}