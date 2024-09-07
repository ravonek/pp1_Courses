#include<iostream>
#include<cmath>  // for pow function
using namespace std;

int main() {
    int tg, months;
    cin >> tg >> months;

    //after 1 month investments will be 2 * tg, after 2 months 2 * (2 * tg), after 3 months 2 *(2*( 2 * tg))
    //hence, the general formula for investments is total = tg * 2^n where n is number of months

    // Calculate the total investment after n months
        int total_investment = tg * pow(2, months);

    cout << total_investment << endl;

    return 0;
}
