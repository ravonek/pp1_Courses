#include <iostream>
using namespace std;

int main() {

    int num;
    cin >> num;

    int flipped_num = ~num & 255; 
    
    cout << (int)flipped_num << endl;
    
    return 0;
}
