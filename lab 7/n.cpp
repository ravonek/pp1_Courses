#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    set<int> unique_elements;
    int element;
    
    for (int i = 0; i < N; i++) {
        cin >> element;
        unique_elements.insert(element);
    }
    
    if (unique_elements.size() == N) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
