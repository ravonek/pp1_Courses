#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = (a + b + c) / 2.0;
        double area = sqrt(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c));

        cout << fixed << setprecision(2) << area;
    } else {
        cout << "nan"; 
    }

    return 0;
}
