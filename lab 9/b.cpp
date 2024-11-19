#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
  
    vector<string> names;
    vector<int> marks;

    // Read input
    for (int i = 0; i < N; ++i) 
    {
        int b;
        string a;
        cin >> a >> b;
        names.push_back(a);
        marks.push_back(b);

    }

    // Sort names alphabetically
    sort(names.begin(), names.end());

    // Sort marks in ascending order
    sort(marks.begin(), marks.end());

    // Output the restored list
    for (int i = 0; i < N; ++i) {
        cout << names.at(i) << " " << marks.at(i) << endl;
    }

    return 0;
}

