#include <iostream>
using namespace std;
int main(){
    int size;
    int arr[size];
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i=0;i<size;i++){
        while(arr[i]<0){
            int a = arr[i]%10;
            if(a==0) cnt++;
            arr[i]/=10;
        }
    }
    cout<<cnt;
}