#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;


    //s.find(t) где s это строка, в которой мы ищем подстроку в скобках (t)
    if (s.find(t) == string::npos) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
