#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<int> seen;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        
        if (seen.find(num) == seen.end()) {
            cout << "YES" << endl;
            seen.insert(num);
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
