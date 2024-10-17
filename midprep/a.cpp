#include <iostream> 
#include <algorithm> 
 
using namespace std; 
 
int main() { 
    int n; 
    cin >> n; 
 
    int statues[50]; // Assuming the maximum size is 50 
    for (int i = 0; i < n; ++i) { 
        cin >> statues[i]; 
    } 
 
    // Step 1: Sort the array 
    sort(statues, statues + n); 
 
    // Step 2: Count additional statues needed 
    int additionalStatues = 0; 
    for (int i = 1; i < n; ++i) { 
        int gap = statues[i] - statues[i - 1]; 
        if (gap > 1) { 
            additionalStatues += gap - 1; // Count the number of missing statues 
        } 
    } 
 
    // Step 3: Output the result 
    cout << additionalStatues << endl; 
 
    return 0; 
}