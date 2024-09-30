
#include <iostream> 
using namespace std; 
int main(){ 

    int n,target; 
    cin >> n >> target; 

    int arr[n]; 

    for(int i = 0 ;i < n; i++){ 
        cin >> arr[i]; 
    } 


    for(int i = 0; i < n; i++){ 
        if(arr[i] == target){ 
            cout << i; 
            return 0; 
        } 
        else if(target < arr[i]){ 
            cout << i; 
            return 0; 
        } 
    } 
    cout<<n; 
}