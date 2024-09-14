#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    if( num % 2 != 0) cout << "Super";
    
    if( num % 2 == 0 && num >= 2 && num <= 5) cout << "Not Super";

    if( num % 2 == 0 && num >= 6 && num <= 20) cout << "Super";

    if( num % 2 == 0 && num > 20) cout << "Not Super";

    

    


    return 0;
}
