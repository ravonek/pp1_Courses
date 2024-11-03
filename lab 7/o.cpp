#include <iostream>
#include <set>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    
    set<int> unique_sums;
    
    for (int i = 0; i < N - 1; i++) 
    {
        int sum = arr[i] + arr[i + 1];
        unique_sums.insert(sum);

    }

    cout << unique_sums.size() << endl;
    
    return 0;
}
