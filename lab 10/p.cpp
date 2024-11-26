#include <iostream>
#include <set>
#include <iterator>
using namespace std;

int main() {
    int N, M;
    
    // Read the sizes of the arrays
    cin >> N >> M;
    
    set<int> unique_union;
    
    // Read the first array and insert elements into the set
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        unique_union.insert(num);
    }
    
    // Read the second array and insert elements into the set
    for (int i = 0; i < M; ++i) {
        int num;
        cin >> num;
        unique_union.insert(num);
    }
    
    // Print the unique union using an iterator
    for (set<int>::iterator it = unique_union.begin(); it != unique_union.end(); ++it) {
        cout << *it << " ";
    }
    
    return 0;
}
