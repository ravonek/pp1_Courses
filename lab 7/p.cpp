#include <iostream>
#include <map>

using namespace std;

int main() 
{
    int N;
    cin >> N;
    
    map<int, int> sum_count;
    int a, b;
    
    for (int i = 0; i < N; i++) 
    {
        cin >> a >> b;
        int sum = a + b;
        
        cout << sum_count[sum] << endl;
        
        sum_count[sum]++;
    }

    
        
    return 0;
}
