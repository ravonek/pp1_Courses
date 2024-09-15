#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t, n;
    cin >> t >> n;
   
    long long result = t * pow(2, n);
    
    cout << result << endl;

    return 0;
}