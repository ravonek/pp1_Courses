#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n, togzhanNOC;
    cin >> n >> togzhanNOC;

    vector<int> othersNOC(n);
    int sum = 0;

    for (int i = 0; i < n; ++i) 
    {
        int a;
        cin >> a;
        othersNOC.push_back(a);
        sum += a;
    }

    int averageNOC = sum / n;

    int difference = abs(togzhanNOC - averageNOC);

    cout << difference << endl;
    
    return 0;
}
