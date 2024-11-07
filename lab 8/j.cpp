#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Map to store dorama names and total episodes
    map<string, int> doramas;

    // Reading input and updating the map
    for (int i = 0; i < n; i++) 
    {
        string s;
        int k;
        cin >> s >> k;
        doramas[s] += k;  // Add the episodes to the existing total
    }

    // Output the doramas in lexicographical order using iterators
    for (map<string, int>::iterator it = doramas.begin(); it != doramas.end(); ++it) 
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
