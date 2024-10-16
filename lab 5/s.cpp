#include<iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string email;
        cin >> email;
        

        if(email.find("@gmail.com") !=  string::npos)
        {
            string login = email.substr(0,email.find('@'));
            cout << login << endl;
        }
    }
    return 0;
}