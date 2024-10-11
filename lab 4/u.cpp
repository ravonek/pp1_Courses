#include <iostream> 
using namespace std; 
int main(){ 
    int n; 
    cin>>n; 
    string arr[n][n]; 
    for(int i = 0;i < n;i++){ 
        for(int j = 0;j < n;j++){ 
            cin >> arr[i][j]; 
        } 
    } 
    int sum = 0;  
    for(int i = 0; i < n;i++){ 
        for(int j = 0;j < n; j++){ 
            if(i == j or i+j == n - 1 or i == 0 or j == 0 or j == n - 1 or i == n - 1){ 
                arr[i][j] = '*'; 
            } 
            else{ 
                sum += stoi(arr[i][j]); 
            } 
        } 
    } 
    for(int i = 0; i < n; i++){ 
        for(int j = 0;j < n; j++){ 
            cout << arr[i][j] << "  ";  
        } 
        cout << endl; 
    } 
    cout << sum; 
}