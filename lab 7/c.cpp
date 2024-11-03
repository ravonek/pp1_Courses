#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    vector<int> scores;
    int score;
    
    while (cin >> score && score != 0) {
        scores.push_back(score);
    }

    int n = scores.size();
    for (int i = 0; i < n / 2; ++i) {
        cout << (scores[i] + scores[n - 1 - i]) << " ";
    }

    if (n % 2 != 0) {
        cout << scores[n / 2];
    }

    cout << endl;
    return 0;
}
