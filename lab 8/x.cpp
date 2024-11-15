#include <iostream>
#include <deque>
#include <climits>
#include <stack>
#include <vector>
using namespace std;
bool isPrime(int n){
    int count = 0;
    for (int i = 1; i<= n; i++)
    {
        if (n%i==0) count++;
    }
    if (count <=2 && n!=1)
    {
        return true;
    } else return false;
}
int main() {
    int n;
    cin >> n;
    vector<int> prime;

    int i = 3;
    int j = 1;
    int k =0;
    while (prime.size()!=100 )
    {
        if (isPrime(i) ){
            j++;
            if (isPrime(j)){
                prime.push_back(i);
                k++;
                if (k == n){
                    cout << i << endl;
                    return 0;
                }
            }
        }
        i++;
    }
    
   
    
    

    
    
    
    
    
    return 0;
}
