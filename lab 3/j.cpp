#include <iostream>
using namespace std;
int main(){
    int size, l , r;
    int arr[size];
    cin>>size;
    int sum = 0;
    l-=1;
    r-=1;
    for(int i=0;i<size;i++){
        cin>>arr[i];

    }
    for(int i=1; i<r;i++){
        sum += arr[i];
        cout << sum;

    }
}