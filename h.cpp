#include<iostream>
using namespace std;

int main() {
    int n, m, t;
    cin >> n >> m >> t;

    // Calculate the number of students who know both languages using set theory and union form
    int both = n + m - t;

    cout << both << endl;

    return 0;
}
