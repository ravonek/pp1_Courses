#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;

    int countR = 0, countL = 0, countF = 0, countB = 0;

    // Count each direction
    for (char move : S) {
        if (move == 'R') countR++;
        else if (move == 'L') countL++;
        else if (move == 'F') countF++;
        else if (move == 'B') countB++;
    }

    // Calculate net movements
    int netHorizontal = countR - countL; // Positive means more R
    int netVertical = countF - countB;   // Positive means more F

    // If there are no net movements, Yelnur is at the starting point
    if (netHorizontal == 0 && netVertical == 0) {
        cout << "Chill Yelnur" << endl;
        return 0;
    }

    string result;

    // Add movements to get back
    if (netHorizontal > 0) result += string(netHorizontal, 'L'); // Move left to counter R
    if (netHorizontal < 0) result += string(-netHorizontal, 'R'); // Move right to counter L
    if (netVertical > 0) result += string(netVertical, 'B'); // Move backward to counter F
    if (netVertical < 0) result += string(-netVertical, 'F'); // Move forward to counter B

    cout << result << endl; // Output the result
    return 0;
}