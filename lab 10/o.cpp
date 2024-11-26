#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;  // Read the size of the array
    
    vector<int> arr(n);
    
    // Read the elements into the array
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    
    // Use a set to get distinct elements and automatically sort them
    set<int> distinctElements(arr.begin(), arr.end());
    
    // Print the results with index starting from 1
    int index = 1;
    for (int element : distinctElements) 
    {
        cout << index << " " << element << endl;
        index++;
    }
    
    return 0;
}
