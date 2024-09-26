#include <iostream>
using namespace std;
int main(){
    int size;
    int arr[size];
    for(int i=0; i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<size;i++){
            int cnt=0;
        for(int j=0; j <size;j++){
            if (arr[i] == arr[j]) cnt++;
        }
    }
}