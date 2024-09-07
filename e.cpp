#include<iostream>
using namespace std;

int main() {
    int h;
    cin >> h;

    // Calculate the angle for the given hour
    int angle = h * 30;

    // If the angle is more than 180, we take the smaller equivalent angle (mod 180)
   
    int  answer = angle % 180;

    cout << answer << endl;

    return 0;
}
