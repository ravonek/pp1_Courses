#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;
    int k2;
    cin >> k2;

    int a[n];

    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for(int i = 1; i <= n; i++){
        if(i == k){
            break;
        }
        else{
            cout << a[i] << " ";
        }
    }

    for(int i = k2; i >= k; i--){
        cout << a[i] << " ";
    }
    
    if(n - k2 != 0){
        for(int i = k2 + 1; i <= n; i++){
            cout << a[i] << " ";
    }
    }

    

}