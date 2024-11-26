#include <iostream>
#include <vector>
#include <map>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of submissions

    vector<string> submissions(n);
    for (int i = 0; i < n; ++i) {
        cin >> submissions[i];
    }

    map<string, int> count_map;  // To track the count of submissions
    set<string> cheaters;        // To store cheaters in order of first occurrence
    vector<string> cheater_list; // To maintain the order of first appearance

    // Process the submissions
    for (int i = 0; i < n; ++i) {
        string name = submissions[i];
        count_map[name]++;
        if (count_map[name] == 2) { // Add to cheaters when detected as cheater
            if (cheaters.find(name) == cheaters.end()) {
                cheaters.insert(name);
                cheater_list.push_back(name);
            }
        }
    }

    if (cheaters.empty()) {
        cout << "Understandable, have a great day" << endl;
    } else {
        for (int i = 0; i < cheater_list.size(); ++i) {
            cout << cheater_list[i] << endl;
        }
    }

    return 0;
}
