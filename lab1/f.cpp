#include <iostream>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    long long total_rabbits = 0;

    
    for (int i = 1; i <= d; i++) {
        
        total_rabbits += (i == 1) ? n : 2 * i * n;
    }

    cout << total_rabbits << endl;

    return 0;
}
