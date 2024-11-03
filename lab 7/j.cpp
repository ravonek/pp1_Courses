#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> uniqueNumbers;
    int num;

    while (cin >> num) 
    {
        uniqueNumbers.insert(num);
    }

    cout << uniqueNumbers.size() << endl;
    return 0;
}
